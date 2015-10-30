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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t547;
// Vuforia.WordList
struct WordList_t548;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleIntData.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_UpD.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C" WordList_t548 * TextTrackerImpl_get_WordList_m2363 (TextTrackerImpl_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C" bool TextTrackerImpl_Start_m2364 (TextTrackerImpl_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C" void TextTrackerImpl_Stop_m2365 (TextTrackerImpl_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool TextTrackerImpl_SetRegionOfInterest_m2366 (TextTrackerImpl_t547 * __this, Rect_t82  ___detectionRegion, Rect_t82  ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C" bool TextTrackerImpl_GetRegionOfInterest_m2367 (TextTrackerImpl_t547 * __this, Rect_t82 * ___detectionRegion, Rect_t82 * ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Rect_t82  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m2368 (TextTrackerImpl_t547 * __this, RectangleIntData_t464  ___camSpaceRectData, Rect_t82  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t437  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C" int32_t TextTrackerImpl_get_CurrentUpDirection_m2369 (TextTrackerImpl_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C" void TextTrackerImpl__ctor_m2370 (TextTrackerImpl_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
