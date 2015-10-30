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
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1890;
// Vuforia.VuforiaManagerImpl/VirtualButtonData[]
struct VirtualButtonDataU5BU5D_t2187;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1968;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
struct Transform_1_t2188;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct  Dictionary_2_t749  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::table
	Int32U5BU5D_t113* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::linkSlots
	LinkU5BU5D_t1890* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::keySlots
	Int32U5BU5D_t113* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::valueSlots
	VirtualButtonDataU5BU5D_t2187* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::serialization_info
	SerializationInfo_t382 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t749_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::<>f__am$cacheB
	Transform_1_t2188 * ___U3CU3Ef__amU24cacheB_15;
};
