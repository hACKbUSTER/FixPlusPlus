#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.VideoTextureRendererAbstractBehaviour
struct  VideoTextureRendererAbstractBehaviour_t62  : public MonoBehaviour_t2
{
	// UnityEngine.Texture2D Vuforia.VideoTextureRendererAbstractBehaviour::mTexture
	Texture2D_t3 * ___mTexture_2;
	// System.Boolean Vuforia.VideoTextureRendererAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_3;
	// System.Int32 Vuforia.VideoTextureRendererAbstractBehaviour::mNativeTextureID
	int32_t ___mNativeTextureID_4;
};
