#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t25;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Camera
struct Camera_t110;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t614;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t615;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t86;
// System.Action
struct Action_t97;
// System.Action`1<System.Boolean>
struct Action_1_t151;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t616;
// UnityEngine.Material
struct Material_t70;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t403;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t66  : public MonoBehaviour_t2
{
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// System.Single Vuforia.VuforiaAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_3;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSkewFrustum
	bool ___mSkewFrustum_4;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_5;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_6;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_7;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_8;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_9;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_10;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_11;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t25 * ___mWorldCenter_12;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mCentralAnchorPoint
	Transform_t78 * ___mCentralAnchorPoint_13;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mParentAnchorPoint
	Transform_t78 * ___mParentAnchorPoint_14;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mPrimaryCamera
	Camera_t110 * ___mPrimaryCamera_15;
	// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::mPrimaryCameraOriginalRect
	Rect_t82  ___mPrimaryCameraOriginalRect_16;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mSecondaryCamera
	Camera_t110 * ___mSecondaryCamera_17;
	// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::mSecondaryCameraOriginalRect
	Rect_t82  ___mSecondaryCameraOriginalRect_18;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_19;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mUsingHeadset
	bool ___mUsingHeadset_20;
	// System.String Vuforia.VuforiaAbstractBehaviour::mHeadsetID
	String_t* ___mHeadsetID_21;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mEyewearUserCalibrationProfileId
	int32_t ___mEyewearUserCalibrationProfileId_22;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSynchronizePoseUpdates
	bool ___mSynchronizePoseUpdates_23;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t614 * ___mTrackerEventHandlers_24;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t615 * ___mVideoBgEventHandlers_25;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t86 * ___mOnVuforiaInitError_26;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t97 * ___mOnVuforiaInitialized_27;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t97 * ___mOnVuforiaStarted_28;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t97 * ___mOnTrackablesUpdated_29;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t97 * ___mRenderOnUpdate_30;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t151 * ___mOnPause_31;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t97 * ___mOnBackgroundTextureChanged_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_35;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_36;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_37;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	Object_t * ___mCameraConfiguration_38;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t70 * ___mClearMaterial_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_40;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_41;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_42;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_43;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_44;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_45;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_46;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t403 * ___mTrackersRequestedToDeinit_47;
};
