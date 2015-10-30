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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t8;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CameraBehavior
struct  CameraBehavior_t7  : public MonoBehaviour_t2
{
	// System.Int32 CameraBehavior::AllStepsNum
	int32_t ___AllStepsNum_2;
	// System.Int32 CameraBehavior::NowStepNum
	int32_t ___NowStepNum_3;
	// UnityEngine.Texture2D CameraBehavior::BackPic
	Texture2D_t3 * ___BackPic_4;
	// UnityEngine.Texture2D CameraBehavior::NextPic
	Texture2D_t3 * ___NextPic_5;
	// UnityEngine.Texture2D CameraBehavior::BeginPic
	Texture2D_t3 * ___BeginPic_6;
	// UnityEngine.Texture2D CameraBehavior::EndPic
	Texture2D_t3 * ___EndPic_7;
	// UnityEngine.Texture2D CameraBehavior::IFixitPic
	Texture2D_t3 * ___IFixitPic_8;
	// UnityEngine.GameObject[] CameraBehavior::StepZeroArrows
	GameObjectU5BU5D_t8* ___StepZeroArrows_9;
	// UnityEngine.GameObject[] CameraBehavior::StepOneArrows
	GameObjectU5BU5D_t8* ___StepOneArrows_10;
	// UnityEngine.GameObject[] CameraBehavior::StepTwoArrows
	GameObjectU5BU5D_t8* ___StepTwoArrows_11;
};
