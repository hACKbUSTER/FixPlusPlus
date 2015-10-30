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

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t574;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m15018_gshared (Action_1_t574 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m15018(__this, ___object, ___method, method) (( void (*) (Action_1_t574 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m15018_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m3905_gshared (Action_1_t574 * __this, SmartTerrainInitializationInfo_t456  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3905(__this, ___obj, method) (( void (*) (Action_1_t574 *, SmartTerrainInitializationInfo_t456 , const MethodInfo*))Action_1_Invoke_m3905_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15019_gshared (Action_1_t574 * __this, SmartTerrainInitializationInfo_t456  ___obj, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m15019(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t574 *, SmartTerrainInitializationInfo_t456 , AsyncCallback_t175 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m15019_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15020_gshared (Action_1_t574 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m15020(__this, ___result, method) (( void (*) (Action_1_t574 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m15020_gshared)(__this, ___result, method)
