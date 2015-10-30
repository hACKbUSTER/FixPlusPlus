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
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t440;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// Vuforia.CloudRecoAbstractBehaviour
struct  CloudRecoAbstractBehaviour_t14  : public MonoBehaviour_t2
{
	// Vuforia.ObjectTracker Vuforia.CloudRecoAbstractBehaviour::mObjectTracker
	ObjectTracker_t439 * ___mObjectTracker_2;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_3;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mInitSuccess
	bool ___mInitSuccess_4;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCloudRecoStarted
	bool ___mCloudRecoStarted_5;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_6;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.CloudRecoAbstractBehaviour::mHandlers
	List_1_t440 * ___mHandlers_7;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_8;
	// System.String Vuforia.CloudRecoAbstractBehaviour::AccessKey
	String_t* ___AccessKey_9;
	// System.String Vuforia.CloudRecoAbstractBehaviour::SecretKey
	String_t* ___SecretKey_10;
	// UnityEngine.Color Vuforia.CloudRecoAbstractBehaviour::ScanlineColor
	Color_t71  ___ScanlineColor_11;
	// UnityEngine.Color Vuforia.CloudRecoAbstractBehaviour::FeaturePointColor
	Color_t71  ___FeaturePointColor_12;
};
