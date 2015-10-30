#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t439;
// Vuforia.MarkerTracker
struct MarkerTracker_t496;
// Vuforia.TextTracker
struct TextTracker_t545;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t543;
// Vuforia.StateManager
struct StateManager_t580;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t597  : public TrackerManager_t596
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t439 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t496 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t545 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t543 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t580 * ___mStateManager_5;
};
