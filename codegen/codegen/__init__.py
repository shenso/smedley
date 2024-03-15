import cog
import toml
from pydantic import BaseModel, Field

_CPP_FN_TEMPLATE = '''
{storage_class} {return_type} {fn_name}({fn_args})
{{
{fn_body}
}}
'''

class FunctionArgument(BaseModel):
    arg_type: str
    name: str | None = None
    reg: str | None = None

class MemberFunction(BaseModel):
    name: str
    ret: str = 'void'
    access: str = 'public'
    static: bool = False
    prop: bool = False
    offset: int
    doc: str | None = None
    this: str | None = None
    args: list[FunctionArgument] = Field(default_factory=list)

def create_getter_cpp_expr(return_type: str, addr_expr = '_addr', static: bool = False) -> str:
    if static:
        return f'return *(reinterpret_cast<{return_type}*>({addr_expr}));\n'
    else:
        raise NotImplementedError

def create_property_fn_cpp_expr(fn: MemberFunction):
    if len(fn.args) == 0:
        return create_getter_cpp_expr(fn.ret, '_addr', static=fn.static)
    elif len(fn.args) == 1:
        raise NotImplementedError
    else:
        raise RuntimeError

def create_member_fn_cpp_expr(fn: MemberFunction):
    asm_calls = []
    stack_exprs = []
    if fn.this is not None:
        asm_calls.append(f'mov {fn.this}, this')
    else:
        stack_exprs.append('this')

    for arg in fn.args:
        if arg.reg is not None:
            asm_calls.append(f'mov {arg.reg}, {arg.name}')
        else:
            stack_exprs.append(arg.name)

    stack_exprs.reverse()
    for expr in stack_exprs:
        asm_calls.append(f'push {expr}')
    
    asm_calls.append('call _addr')
    return ' '.join(map(lambda x: f'__asm {x}', asm_calls)) + '\n'

def fn_to_cpp(fn: MemberFunction) -> str:
    addr = hex(fn.offset)
    fn_body = f'const uintptr_t _addr = memory::Map::base_addr + {addr};\n'

    if fn.prop:
        fn_body += create_property_fn_cpp_expr(fn)
    else:
        fn_body += create_member_fn_cpp_expr(fn)

    return (
        _CPP_FN_TEMPLATE.format(
            storage_class='static' if fn.static else '',
            return_type=fn.ret,
            fn_name=fn.name,
            fn_args=','.join(map(lambda a: f'{a.arg_type} {a.name}', fn.args)),
            fn_body=fn_body.strip(),
        )\
        .strip()
    )

def print_class_model_fns(filename: str, *, access: str | None = None) -> None:
    with open(filename, 'r', encoding='utf-8') as fd:
        data = toml.load(fd)
    
    fns = list(
        filter(
            lambda x: access is None or x.access == access,
            map(MemberFunction.parse_obj, data['fns'])
        )
    )
    for fn in fns:
        cog.outl(fn_to_cpp(fn))