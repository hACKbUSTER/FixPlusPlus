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

// Vuforia.EyewearImpl
struct EyewearImpl_t455;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Eyewear_EyeID.h"

// System.Boolean Vuforia.EyewearImpl::IsDeviceDetected()
extern "C" bool EyewearImpl_IsDeviceDetected_m1998 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::setHeadsetPresent(System.String)
extern "C" bool EyewearImpl_setHeadsetPresent_m1999 (EyewearImpl_t455 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::setHeadsetNotPresent()
extern "C" bool EyewearImpl_setHeadsetNotPresent_m2000 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsSeeThru()
extern "C" bool EyewearImpl_IsSeeThru_m2001 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.EyewearImpl::GetScreenOrientation()
extern "C" int32_t EyewearImpl_GetScreenOrientation_m2002 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsStereoCapable()
extern "C" bool EyewearImpl_IsStereoCapable_m2003 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsStereoEnabled()
extern "C" bool EyewearImpl_IsStereoEnabled_m2004 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsStereoGLOnly()
extern "C" bool EyewearImpl_IsStereoGLOnly_m2005 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::SetStereo(System.Boolean)
extern "C" bool EyewearImpl_SetStereo_m2006 (EyewearImpl_t455 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsPredictiveTrackingEnabled()
extern "C" bool EyewearImpl_IsPredictiveTrackingEnabled_m2007 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::SetPredictiveTracking(System.Boolean)
extern "C" bool EyewearImpl_SetPredictiveTracking_m2008 (EyewearImpl_t455 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearImpl::setProjectionClippingPlanes(System.Single,System.Single)
extern "C" void EyewearImpl_setProjectionClippingPlanes_m2009 (EyewearImpl_t455 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearImpl::GetProjectionMatrix(Vuforia.Eyewear/EyeID,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t115  EyewearImpl_GetProjectionMatrix_m2010 (EyewearImpl_t455 * __this, int32_t ___eyeID, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearImpl::GetProjectionMatrix(Vuforia.Eyewear/EyeID,System.Int32,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t115  EyewearImpl_GetProjectionMatrix_m2011 (EyewearImpl_t455 * __this, int32_t ___eyeID, int32_t ___profileID, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearImpl::.ctor()
extern "C" void EyewearImpl__ctor_m2012 (EyewearImpl_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
