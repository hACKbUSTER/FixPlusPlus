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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct Transform_1_t2075;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13477_gshared (Transform_1_t2075 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13477(__this, ___object, ___method, method) (( void (*) (Transform_1_t2075 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13477_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2065  Transform_1_Invoke_m13478_gshared (Transform_1_t2075 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13478(__this, ___key, ___value, method) (( KeyValuePair_2_t2065  (*) (Transform_1_t2075 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13478_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13479_gshared (Transform_1_t2075 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13479(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2075 *, int32_t, Object_t *, AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13479_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2065  Transform_1_EndInvoke_m13480_gshared (Transform_1_t2075 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13480(__this, ___result, method) (( KeyValuePair_2_t2065  (*) (Transform_1_t2075 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13480_gshared)(__this, ___result, method)
