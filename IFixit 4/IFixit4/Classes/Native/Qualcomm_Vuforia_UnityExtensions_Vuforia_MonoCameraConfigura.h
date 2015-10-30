#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t110;
// System.Action
struct Action_t97;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct Dictionary_2_t425;

#include "mscorlib_System_Object.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_t424  : public Object_t
{
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t110 * ___mPrimaryCamera_0;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.MonoCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_1;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_2;
	// System.Action Vuforia.MonoCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t97 * ___mOnVideoBackgroundConfigChanged_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour> Vuforia.MonoCameraConfiguration::mVideoBackgroundBehaviours
	Dictionary_2_t425 * ___mVideoBackgroundBehaviours_4;
	// UnityEngine.Rect Vuforia.MonoCameraConfiguration::mViewportRect
	Rect_t82  ___mViewportRect_5;
	// System.Boolean Vuforia.MonoCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_6;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraWidthFactor
	int32_t ___mCameraWidthFactor_7;
	// System.Int32 Vuforia.MonoCameraConfiguration::mViewPortWidth
	int32_t ___mViewPortWidth_8;
	// System.Int32 Vuforia.MonoCameraConfiguration::mViewPortHeight
	int32_t ___mViewPortHeight_9;
	// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_10;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_11;
};
