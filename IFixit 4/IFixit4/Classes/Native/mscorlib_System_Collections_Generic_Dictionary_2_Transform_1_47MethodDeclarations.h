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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>
struct Transform_1_t2199;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15855_gshared (Transform_1_t2199 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15855(__this, ___object, ___method, method) (( void (*) (Transform_1_t2199 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15855_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2189  Transform_1_Invoke_m15856_gshared (Transform_1_t2199 * __this, int32_t ___key, VirtualButtonData_t510  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15856(__this, ___key, ___value, method) (( KeyValuePair_2_t2189  (*) (Transform_1_t2199 *, int32_t, VirtualButtonData_t510 , const MethodInfo*))Transform_1_Invoke_m15856_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15857_gshared (Transform_1_t2199 * __this, int32_t ___key, VirtualButtonData_t510  ___value, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15857(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2199 *, int32_t, VirtualButtonData_t510 , AsyncCallback_t175 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15857_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2189  Transform_1_EndInvoke_m15858_gshared (Transform_1_t2199 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15858(__this, ___result, method) (( KeyValuePair_2_t2189  (*) (Transform_1_t2199 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15858_gshared)(__this, ___result, method)
