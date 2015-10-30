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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17623_gshared (InternalEnumerator_1_t2359 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17623(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2359 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17623_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17624_gshared (InternalEnumerator_1_t2359 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17624(__this, method) (( void (*) (InternalEnumerator_1_t2359 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17624_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17625_gshared (InternalEnumerator_1_t2359 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17625(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2359 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17625_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17626_gshared (InternalEnumerator_1_t2359 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17626(__this, method) (( void (*) (InternalEnumerator_1_t2359 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17626_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17627_gshared (InternalEnumerator_1_t2359 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17627(__this, method) (( bool (*) (InternalEnumerator_1_t2359 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17627_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t686  InternalEnumerator_1_get_Current_m17628_gshared (InternalEnumerator_1_t2359 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17628(__this, method) (( TimeSpan_t686  (*) (InternalEnumerator_1_t2359 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17628_gshared)(__this, method)
