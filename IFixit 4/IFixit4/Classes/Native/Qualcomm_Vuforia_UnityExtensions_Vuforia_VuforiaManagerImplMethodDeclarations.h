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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t523;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t528;
// UnityEngine.Transform
struct Transform_t78;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t581;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__11.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaManagerImpl_set_WorldCenterMode_m2265 (VuforiaManagerImpl_t523 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C" int32_t VuforiaManagerImpl_get_WorldCenterMode_m2266 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void VuforiaManagerImpl_set_WorldCenter_m2267 (VuforiaManagerImpl_t523 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C" Object_t * VuforiaManagerImpl_get_WorldCenter_m2268 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ARCameraTransform_m2269 (VuforiaManagerImpl_t523 * __this, Transform_t78 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C" Transform_t78 * VuforiaManagerImpl_get_ARCameraTransform_m2270 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_CentralAnchorPoint_m2271 (VuforiaManagerImpl_t523 * __this, Transform_t78 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C" Transform_t78 * VuforiaManagerImpl_get_CentralAnchorPoint_m2272 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ParentAnchorPoint_m2273 (VuforiaManagerImpl_t523 * __this, Transform_t78 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C" Transform_t78 * VuforiaManagerImpl_get_ParentAnchorPoint_m2274 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C" bool VuforiaManagerImpl_get_Initialized_m2275 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C" int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m2276 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m2277 (VuforiaManagerImpl_t523 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m2278 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C" bool VuforiaManagerImpl_Init_m2279 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C" void VuforiaManagerImpl_Deinit_m2280 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C" bool VuforiaManagerImpl_Update_m2281 (VuforiaManagerImpl_t523 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C" void VuforiaManagerImpl_StartRendering_m2282 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C" void VuforiaManagerImpl_FinishRendering_m2283 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C" void VuforiaManagerImpl_Pause_m2284 (VuforiaManagerImpl_t523 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C" void VuforiaManagerImpl_SetStatesToDiscard_m2285 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void VuforiaManagerImpl_InitializeTrackableContainer_m2286 (VuforiaManagerImpl_t523 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateTrackers_m2287 (VuforiaManagerImpl_t523 * __this, FrameState_t520  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void VuforiaManagerImpl_UpdateSmartTerrain_m2288 (VuforiaManagerImpl_t523 * __this, FrameState_t520  ___frameState, StateManagerImpl_t581 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C" void VuforiaManagerImpl_UpdateTrackablesEditor_m2289 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateWordTrackables_m2290 (VuforiaManagerImpl_t523 * __this, FrameState_t520  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C" void VuforiaManagerImpl_UpdateImageContainer_m2291 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C" void VuforiaManagerImpl_UpdateCameraFrame_m2292 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C" void VuforiaManagerImpl_InjectCameraFrame_m2293 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C" void VuforiaManagerImpl__ctor_m2294 (VuforiaManagerImpl_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
