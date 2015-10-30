#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.DataSetImpl
struct DataSetImpl_t446;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t445  : public TrackableImpl_t444
{
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t10  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t446 * ___mDataSet_3;
};
