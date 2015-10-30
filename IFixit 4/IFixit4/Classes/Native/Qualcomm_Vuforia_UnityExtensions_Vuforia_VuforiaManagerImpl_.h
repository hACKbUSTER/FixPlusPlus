#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t508 
{
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/PoseData::position
	Vector3_t10  ___position_0;
	// UnityEngine.Quaternion Vuforia.VuforiaManagerImpl/PoseData::orientation
	Quaternion_t116  ___orientation_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/PoseData::unused
	int32_t ___unused_2;
};
#pragma pack(pop, tp)
