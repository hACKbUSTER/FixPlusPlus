#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t2213;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  Enumerator_t2220 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::dictionary
	Dictionary_2_t2213 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::current
	KeyValuePair_2_t2215  ___current_3;
};
