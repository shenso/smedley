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
    argtype: str # the type expression
    name: str | None = None # the name of the argument
    reg: str | None = None # the register the argument should be copied to

class MemberFunction(BaseModel):
    name: str # the name of the function
    ret: str = 'void' # the return type
    # if this is not None then the return value's memory should be allocated in memory by the
    # generated function. the pointer is passed to the register given, or on the stack in the position provided
    retbuf: str | int | None = None 
    access: str = 'public' # function accessibility
    callconv: str = '__cdecl'
    stacksize: int | None = None # must be supplied if calling convention requires cleaning the stack
    static: bool = False # is the function static?
    prop: bool = False # is the funciton a property? i.e., does offset point to a global pointer, and we are just creating a getter/setter on top of that?
    offset: int # relative address. this plus the base address gets the absolute address.
    doc: str | None = None # doc string explaining the function
    this: str | None = None # the register `this` should go into, if any
    # list of arguments. matches arg order in function signature. if the arg doesn't have a register it is pushed in reverse order. 
    # generally arguments with registers go first.
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
    cpp_header = ''
    cpp_footer = ''

    if fn.retbuf is not None:
        cpp_header += fn.ret + ' ret_val;\n'
        cpp_header += 'auto ret_val_ptr = &ret_val;\n'
        # if retbuf location is a register, handle now. if on the stack, check each time we append to the stack
        if isinstance(fn.retbuf, str):
            asm_calls.append(f'mov {fn.retbuf}, ret_val_ptr')

    # check if retbuf is located at beginning of stack
    if isinstance(fn.retbuf, int) and fn.retbuf == 1:
        stack_exprs.append('ret_val_ptr')

    if not fn.static:
        if fn.this is not None:
            asm_calls.append(f'mov {fn.this}, this')
        else:
            stack_exprs.append('this')

    for i, arg in enumerate(fn.args):
        if arg.reg is not None:
            asm_calls.append(f'mov {arg.reg}, {arg.name}')
        else:
            arg_name = arg.name or f'arg_{i}'
            if isinstance(fn.retbuf, int) and fn.retbuf == len(stack_exprs) + 1:
                stack_exprs.append('rel_val_ptr')
            stack_exprs.append(arg_name)

    # check if retbuf is located at end of stack
    if isinstance(fn.retbuf, int) and fn.retbuf > len(stack_exprs):
        stack_exprs.append('ret_val_ptr')

    # reverse the argument list before pushing onto the stack
    stack_exprs.reverse()
    for expr in stack_exprs:
        asm_calls.append(f'push {expr}')
    
    asm_calls.append('call _addr')
    if fn.callconv == '__cdecl' and fn.stacksize is not None and fn.stacksize > 0:
        asm_calls.append(f'add esp,{fn.stacksize}')

    asm_expr = ' '.join(map(lambda x: f'__asm {x}', asm_calls)) + '\n'
    if fn.retbuf is not None:
        cpp_footer += 'return ret_val;\n'

    return cpp_header + asm_expr + cpp_footer

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
            fn_args=','.join(f'{a.argtype} {a.name or f"arg_{i}"}' for i, a in enumerate(fn.args)),
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