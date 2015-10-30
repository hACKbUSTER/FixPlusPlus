#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<Vuforia.ITextRecoEventHandler>
struct List_1_t619;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// Vuforia.TextRecoAbstractBehaviour
struct  TextRecoAbstractBehaviour_t53  : public MonoBehaviour_t2
{
	// System.Boolean Vuforia.TextRecoAbstractBehaviour::mHasInitialized
	bool ___mHasInitialized_2;
	// System.Boolean Vuforia.TextRecoAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_3;
	// System.Boolean Vuforia.TextRecoAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_4;
	// System.String Vuforia.TextRecoAbstractBehaviour::mWordListFile
	String_t* ___mWordListFile_5;
	// System.String Vuforia.TextRecoAbstractBehaviour::mCustomWordListFile
	String_t* ___mCustomWordListFile_6;
	// System.String Vuforia.TextRecoAbstractBehaviour::mAdditionalCustomWords
	String_t* ___mAdditionalCustomWords_7;
	// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::mFilterMode
	int32_t ___mFilterMode_8;
	// System.String Vuforia.TextRecoAbstractBehaviour::mFilterListFile
	String_t* ___mFilterListFile_9;
	// System.String Vuforia.TextRecoAbstractBehaviour::mAdditionalFilterWords
	String_t* ___mAdditionalFilterWords_10;
	// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_11;
	// System.Int32 Vuforia.TextRecoAbstractBehaviour::mMaximumWordInstances
	int32_t ___mMaximumWordInstances_12;
	// System.Collections.Generic.List`1<Vuforia.ITextRecoEventHandler> Vuforia.TextRecoAbstractBehaviour::mTextRecoEventHandlers
	List_1_t619 * ___mTextRecoEventHandlers_13;
};
