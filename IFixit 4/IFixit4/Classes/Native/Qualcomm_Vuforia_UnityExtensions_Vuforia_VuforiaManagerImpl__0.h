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

// Vuforia.VuforiaManagerImpl/TrackableResultData
struct  TrackableResultData_t509 
{
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/TrackableResultData::pose
	PoseData_t508  ___pose_0;
	// Vuforia.TrackableBehaviour/Status Vuforia.VuforiaManagerImpl/TrackableResultData::status
	int32_t ___status_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/TrackableResultData::id
	int32_t ___id_2;
};
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/TrackableResultData
#pragma pack(push, tp, 1)
struct TrackableResultData_t509_marshaled
{
	PoseData_t508  ___pose_0;
	int32_t ___status_1;
	int32_t ___id_2;
};
#pragma pack(pop, tp)
