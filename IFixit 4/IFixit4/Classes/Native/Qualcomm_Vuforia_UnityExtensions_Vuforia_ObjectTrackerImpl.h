#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t492;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t493;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t475;
// Vuforia.TargetFinder
struct TargetFinder_t494;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTracker.h"

// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t491  : public ObjectTracker_t439
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t492 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t493 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t475 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t494 * ___mTargetFinder_4;
};
