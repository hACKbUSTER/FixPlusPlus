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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct Transform_1_t2183;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15710_gshared (Transform_1_t2183 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15710(__this, ___object, ___method, method) (( void (*) (Transform_1_t2183 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15710_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2174  Transform_1_Invoke_m15711_gshared (Transform_1_t2183 * __this, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15711(__this, ___key, ___value, method) (( KeyValuePair_2_t2174  (*) (Transform_1_t2183 *, int32_t, TrackableResultData_t509 , const MethodInfo*))Transform_1_Invoke_m15711_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15712_gshared (Transform_1_t2183 * __this, int32_t ___key, TrackableResultData_t509  ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15712(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2183 *, int32_t, TrackableResultData_t509 , AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15712_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2174  Transform_1_EndInvoke_m15713_gshared (Transform_1_t2183 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15713(__this, ___result, method) (( KeyValuePair_2_t2174  (*) (Transform_1_t2183 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15713_gshared)(__this, ___result, method)
