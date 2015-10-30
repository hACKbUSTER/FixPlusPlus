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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Transform_1_t2182;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15702_gshared (Transform_1_t2182 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15702(__this, ___object, ___method, method) (( void (*) (Transform_1_t2182 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15702_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(TKey,TValue)
extern "C" TrackableResultData_t509  Transform_1_Invoke_m15703_gshared (Transform_1_t2182 * __this, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15703(__this, ___key, ___value, method) (( TrackableResultData_t509  (*) (Transform_1_t2182 *, int32_t, TrackableResultData_t509 , const MethodInfo*))Transform_1_Invoke_m15703_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15704_gshared (Transform_1_t2182 * __this, int32_t ___key, TrackableResultData_t509  ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15704(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2182 *, int32_t, TrackableResultData_t509 , AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15704_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" TrackableResultData_t509  Transform_1_EndInvoke_m15705_gshared (Transform_1_t2182 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15705(__this, ___result, method) (( TrackableResultData_t509  (*) (Transform_1_t2182 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15705_gshared)(__this, ___result, method)
