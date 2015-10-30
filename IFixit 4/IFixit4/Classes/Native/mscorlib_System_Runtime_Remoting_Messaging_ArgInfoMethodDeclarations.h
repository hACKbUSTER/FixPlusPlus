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

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t1507;
// System.Reflection.MethodBase
struct MethodBase_t413;
// System.Object[]
struct ObjectU5BU5D_t96;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C" void ArgInfo__ctor_m9106 (ArgInfo_t1507 * __this, MethodBase_t413 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C" ObjectU5BU5D_t96* ArgInfo_GetInOutArgs_m9107 (ArgInfo_t1507 * __this, ObjectU5BU5D_t96* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
