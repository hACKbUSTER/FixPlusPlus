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

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_HumanLimit.h"

// UnityEngine.HumanBone
struct  HumanBone_t244 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t243  ___limit_2;
};
// Native definition for marshalling of: UnityEngine.HumanBone
struct HumanBone_t244_marshaled
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t243  ___limit_2;
};
