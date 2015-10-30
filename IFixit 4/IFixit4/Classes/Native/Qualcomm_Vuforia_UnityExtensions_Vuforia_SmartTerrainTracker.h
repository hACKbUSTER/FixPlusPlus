#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t97;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.SmartTerrainTrackerAbstractBehaviour
struct  SmartTerrainTrackerAbstractBehaviour_t50  : public MonoBehaviour_t2
{
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitTracker
	bool ___mAutoInitTracker_2;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoStartTracker
	bool ___mAutoStartTracker_3;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitBuilder
	bool ___mAutoInitBuilder_4;
	// System.Single Vuforia.SmartTerrainTrackerAbstractBehaviour::mSceneUnitsToMillimeter
	float ___mSceneUnitsToMillimeter_5;
	// System.Action Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerStarted
	Action_t97 * ___mTrackerStarted_6;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_7;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_8;
};
