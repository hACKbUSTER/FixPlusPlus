#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t272;

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.SliderHandler
struct  SliderHandler_t333 
{
	// UnityEngine.Rect UnityEngine.SliderHandler::position
	Rect_t82  ___position_0;
	// System.Single UnityEngine.SliderHandler::currentValue
	float ___currentValue_1;
	// System.Single UnityEngine.SliderHandler::size
	float ___size_2;
	// System.Single UnityEngine.SliderHandler::start
	float ___start_3;
	// System.Single UnityEngine.SliderHandler::end
	float ___end_4;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::slider
	GUIStyle_t272 * ___slider_5;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::thumb
	GUIStyle_t272 * ___thumb_6;
	// System.Boolean UnityEngine.SliderHandler::horiz
	bool ___horiz_7;
	// System.Int32 UnityEngine.SliderHandler::id
	int32_t ___id_8;
};
