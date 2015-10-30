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
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.SkeletonBone
struct  SkeletonBone_t242 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t10  ___position_1;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t116  ___rotation_2;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t10  ___scale_3;
	// System.Int32 UnityEngine.SkeletonBone::transformModified
	int32_t ___transformModified_4;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct SkeletonBone_t242_marshaled
{
	char* ___name_0;
	Vector3_t10  ___position_1;
	Quaternion_t116  ___rotation_2;
	Vector3_t10  ___scale_3;
	int32_t ___transformModified_4;
};
