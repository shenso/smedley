#pragma once

#include "../macros.hpp"
#include <lua.hpp>
#include <windows.h>

namespace smedley::clausewitz
{

    DEFINE_FN_EDI_0(GetLuaState, lua_State **, 0x005be180, int, index);

}