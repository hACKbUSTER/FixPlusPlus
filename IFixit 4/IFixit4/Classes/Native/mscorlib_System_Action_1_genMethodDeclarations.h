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

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t86;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m152_gshared (Action_1_t86 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m152(__this, ___object, ___method, method) (( void (*) (Action_1_t86 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m152_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::Invoke(T)
extern "C" void Action_1_Invoke_m4002_gshared (Action_1_t86 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m4002(__this, ___obj, method) (( void (*) (Action_1_t86 *, int32_t, const MethodInfo*))Action_1_Invoke_m4002_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.VuforiaUnity/InitError>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m11557_gshared (Action_1_t86 * __this, int32_t ___obj, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m11557(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t86 *, int32_t, AsyncCallback_t175 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m11557_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m11558_gshared (Action_1_t86 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m11558(__this, ___result, method) (( void (*) (Action_1_t86 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m11558_gshared)(__this, ___result, method)
