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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t535;
// UnityEngine.Texture2D
struct Texture2D_t3;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_1.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Fps.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRendererImpl.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"

// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C" Texture2D_t3 * VuforiaRendererImpl_get_VideoBackgroundTexture_m2300 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C" VideoBGCfgData_t531  VuforiaRendererImpl_GetVideoBackgroundConfig_m2301 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C" void VuforiaRendererImpl_ClearVideoBackgroundConfig_m2302 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C" void VuforiaRendererImpl_SetVideoBackgroundConfig_m2303 (VuforiaRendererImpl_t535 * __this, VideoBGCfgData_t531  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C" bool VuforiaRendererImpl_SetVideoBackgroundTexture_m2304 (VuforiaRendererImpl_t535 * __this, Texture2D_t3 * ___texture, int32_t ___nativeTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C" bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m2305 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t420  VuforiaRendererImpl_GetVideoTextureInfo_m2306 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C" void VuforiaRendererImpl_Pause_m2307 (VuforiaRendererImpl_t535 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C" int32_t VuforiaRendererImpl_GetRecommendedFps_m2308 (VuforiaRendererImpl_t535 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C" void VuforiaRendererImpl_UnityRenderEvent_m2309 (VuforiaRendererImpl_t535 * __this, int32_t ___renderEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C" bool VuforiaRendererImpl_HasBackgroundTextureChanged_m2310 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C" void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m2311 (VuforiaRendererImpl_t535 * __this, VideoBGCfgData_t531  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C" int32_t VuforiaRendererImpl_GetLastSetReflection_m2312 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C" void VuforiaRendererImpl__ctor_m2313 (VuforiaRendererImpl_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
