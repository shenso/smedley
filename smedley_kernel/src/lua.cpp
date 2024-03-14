/**
 * Linking directly to the Lua 5.1.4 DLL has proven problematic.
 * Using the 2010 compiler might help but would make Smedley even less portable than it already is.
 * This file implements the Lua header file by calling the functions in the DLL text segment by dereferencing the 
 * process's import table.
 */
#pragma once

#include <stdexcept>
#include <windows.h>
#include "lua.hpp"
#include "memory.hpp"

using namespace smedley;

namespace smedley::lua::addresses {
    constexpr uintptr_t lua_tolstring = 0x0088a548;
    constexpr uintptr_t lua_pcall = 0x0088a4a8;
    constexpr uintptr_t luaL_loadstring = 0x0088a478;
}

// normally would use a macro for these but they require dereferencing the import table first.
// will likely use configurations here as I intend to do to replace this macro hell I'm in
extern "C" {

const char *lua_tolstring(lua_State *L, int index, size_t *len)
{
    const uintptr_t _addr = memory::Map::base_addr + lua::addresses::lua_tolstring;
    typedef const char *_lua_tolstring_type(lua_State * L, int index, size_t *len);
    // macro wasn't used here because this is a pointer to a pointer
    _lua_tolstring_type **fn = (_lua_tolstring_type **)_addr;
    return (*fn)(L, index, len);
}

int lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
{
    const uintptr_t _addr = memory::Map::base_addr + lua::addresses::lua_pcall;
    typedef int (*_lua_pcall_type)(lua_State *L, int nargs, int nresults, int errfunc);
    _lua_pcall_type *fn = *(_lua_pcall_type **)&_addr;
    return (*fn)(L, nargs, nresults, errfunc);
}

int luaL_loadstring(lua_State *L, const char *s)
{
    const uintptr_t _addr = memory::Map::base_addr + lua::;
    typedef int _luaL_loadstring_type(lua_State * L, const char *s);
    _luaL_loadstring_type **fn = (_luaL_loadstring_type **)_addr;
    return (*fn)(L, s);
}

}