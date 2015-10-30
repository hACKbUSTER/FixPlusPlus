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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Transform_1_t2127;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14423_gshared (Transform_1_t2127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14423(__this, ___object, ___method, method) (( void (*) (Transform_1_t2127 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14423_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2117  Transform_1_Invoke_m14424_gshared (Transform_1_t2127 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14424(__this, ___key, ___value, method) (( KeyValuePair_2_t2117  (*) (Transform_1_t2127 *, Object_t *, uint16_t, const MethodInfo*))Transform_1_Invoke_m14424_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14425_gshared (Transform_1_t2127 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14425(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2127 *, Object_t *, uint16_t, AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14425_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2117  Transform_1_EndInvoke_m14426_gshared (Transform_1_t2127 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14426(__this, ___result, method) (( KeyValuePair_2_t2117  (*) (Transform_1_t2127 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14426_gshared)(__this, ___result, method)
