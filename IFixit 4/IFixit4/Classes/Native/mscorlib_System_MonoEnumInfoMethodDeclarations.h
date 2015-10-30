#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t879;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_MonoEnumInfo.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C" void MonoEnumInfo__ctor_m10778 (MonoEnumInfo_t1744 * __this, MonoEnumInfo_t1744  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C" void MonoEnumInfo__cctor_m10779 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_get_enum_info_m10780 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1744 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C" Hashtable_t879 * MonoEnumInfo_get_Cache_m10781 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_GetInfo_m10782 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1744 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
