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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2263;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16898_gshared (Transform_1_t2263 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16898(__this, ___object, ___method, method) (( void (*) (Transform_1_t2263 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16898_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1141  Transform_1_Invoke_m16899_gshared (Transform_1_t2263 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16899(__this, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Transform_1_t2263 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m16899_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16900_gshared (Transform_1_t2263 * __this, Object_t * ___key, bool ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16900(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2263 *, Object_t *, bool, AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16900_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1141  Transform_1_EndInvoke_m16901_gshared (Transform_1_t2263 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16901(__this, ___result, method) (( DictionaryEntry_t1141  (*) (Transform_1_t2263 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16901_gshared)(__this, ___result, method)
