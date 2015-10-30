#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__2.h"

// Vuforia.VuforiaManagerImpl/WordResultData
struct  WordResultData_t513 
{
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/WordResultData::pose
	PoseData_t508  ___pose_0;
	// Vuforia.TrackableBehaviour/Status Vuforia.VuforiaManagerImpl/WordResultData::status
	int32_t ___status_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordResultData::id
	int32_t ___id_2;
	// Vuforia.VuforiaManagerImpl/Obb2D Vuforia.VuforiaManagerImpl/WordResultData::orientedBoundingBox
	Obb2D_t511  ___orientedBoundingBox_3;
};
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/WordResultData
#pragma pack(push, tp, 1)
struct WordResultData_t513_marshaled
{
	PoseData_t508  ___pose_0;
	int32_t ___status_1;
	int32_t ___id_2;
	Obb2D_t511  ___orientedBoundingBox_3;
};
#pragma pack(pop, tp)
