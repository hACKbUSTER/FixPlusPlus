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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t1904;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11422_gshared (Transform_1_t1904 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11422(__this, ___object, ___method, method) (( void (*) (Transform_1_t1904 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11422_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m11423_gshared (Transform_1_t1904 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11423(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1904 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m11423_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11424_gshared (Transform_1_t1904 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11424(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1904 *, Object_t *, int32_t, AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11424_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m11425_gshared (Transform_1_t1904 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11425(__this, ___result, method) (( Object_t * (*) (Transform_1_t1904 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11425_gshared)(__this, ___result, method)
