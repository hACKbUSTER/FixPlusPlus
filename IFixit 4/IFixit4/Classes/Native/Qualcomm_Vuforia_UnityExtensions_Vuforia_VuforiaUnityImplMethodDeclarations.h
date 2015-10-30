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


#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Vufori.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.VuforiaUnityImpl::Deinit()
extern "C" void VuforiaUnityImpl_Deinit_m2314 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::IsRendererDirty()
extern "C" bool VuforiaUnityImpl_IsRendererDirty_m2315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C" bool VuforiaUnityImpl_SetHint_m2316 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::SetHint(System.UInt32,System.Int32)
extern "C" bool VuforiaUnityImpl_SetHint_m2317 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VuforiaUnityImpl::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t115  VuforiaUnityImpl_GetProjectionGL_m2318 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::SetApplicationEnvironment()
extern "C" void VuforiaUnityImpl_SetApplicationEnvironment_m2319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::OnPause()
extern "C" void VuforiaUnityImpl_OnPause_m2320 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::OnResume()
extern "C" void VuforiaUnityImpl_OnResume_m2321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::SetRendererDirty()
extern "C" void VuforiaUnityImpl_SetRendererDirty_m2322 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::.cctor()
extern "C" void VuforiaUnityImpl__cctor_m2323 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
