#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.ReconstructionImpl
struct  ReconstructionImpl_t441  : public Object_t
{
	// System.IntPtr Vuforia.ReconstructionImpl::mNativeReconstructionPtr
	IntPtr_t ___mNativeReconstructionPtr_0;
	// System.Boolean Vuforia.ReconstructionImpl::mMaximumAreaIsSet
	bool ___mMaximumAreaIsSet_1;
	// UnityEngine.Rect Vuforia.ReconstructionImpl::mMaximumArea
	Rect_t82  ___mMaximumArea_2;
	// System.Single Vuforia.ReconstructionImpl::mNavMeshPadding
	float ___mNavMeshPadding_3;
	// System.Boolean Vuforia.ReconstructionImpl::mNavMeshUpdatesEnabled
	bool ___mNavMeshUpdatesEnabled_4;
};
