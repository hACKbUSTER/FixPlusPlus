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
// Vuforia.WebCamImpl
struct WebCamImpl_t479;
// UnityEngine.Camera
struct Camera_t110;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.WebCamAbstractBehaviour
struct  WebCamAbstractBehaviour_t68  : public MonoBehaviour_t2
{
	// System.Int32 Vuforia.WebCamAbstractBehaviour::RenderTextureLayer
	int32_t ___RenderTextureLayer_2;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mPlayModeRenderVideo
	bool ___mPlayModeRenderVideo_3;
	// System.String Vuforia.WebCamAbstractBehaviour::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_4;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mFlipHorizontally
	bool ___mFlipHorizontally_5;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mTurnOffWebCam
	bool ___mTurnOffWebCam_6;
	// Vuforia.WebCamImpl Vuforia.WebCamAbstractBehaviour::mWebCamImpl
	WebCamImpl_t479 * ___mWebCamImpl_7;
	// UnityEngine.Camera Vuforia.WebCamAbstractBehaviour::mBackgroundCameraInstance
	Camera_t110 * ___mBackgroundCameraInstance_8;
};
