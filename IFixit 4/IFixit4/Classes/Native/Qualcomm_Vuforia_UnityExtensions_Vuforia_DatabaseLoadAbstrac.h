#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t462;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.DatabaseLoadAbstractBehaviour
struct  DatabaseLoadAbstractBehaviour_t18  : public MonoBehaviour_t2
{
	// System.Boolean Vuforia.DatabaseLoadAbstractBehaviour::mDatasetsLoaded
	bool ___mDatasetsLoaded_2;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mDataSetsToLoad
	List_1_t462 * ___mDataSetsToLoad_3;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mDataSetsToActivate
	List_1_t462 * ___mDataSetsToActivate_4;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mExternalDatasetRoots
	List_1_t462 * ___mExternalDatasetRoots_5;
};
