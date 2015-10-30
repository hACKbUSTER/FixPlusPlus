#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t113;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.MeshRenderer>[]
struct LinkU5BU5D_t2241;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t2242;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.MeshRenderer>
struct IEqualityComparer_1_t2244;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>
struct  HashSet_1_t622  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::table
	Int32U5BU5D_t113* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::links
	LinkU5BU5D_t2241* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::slots
	MeshRendererU5BU5D_t2242* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::si
	SerializationInfo_t382 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>::generation
	int32_t ___generation_13;
};
