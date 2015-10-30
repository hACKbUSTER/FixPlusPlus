#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t225;

#include "mscorlib_System_ValueType.h"

// Vuforia.Eyewear/EyewearCalibrationReading
struct  EyewearCalibrationReading_t453 
{
	// System.Single[] Vuforia.Eyewear/EyewearCalibrationReading::pose
	SingleU5BU5D_t225* ___pose_0;
	// System.Single Vuforia.Eyewear/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.Eyewear/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.Eyewear/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.Eyewear/EyewearCalibrationReading::unused
	int32_t ___unused_4;
};
// Native definition for marshalling of: Vuforia.Eyewear/EyewearCalibrationReading
#pragma pack(push, tp, 1)
struct EyewearCalibrationReading_t453_marshaled
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___unused_4;
};
#pragma pack(pop, tp)
