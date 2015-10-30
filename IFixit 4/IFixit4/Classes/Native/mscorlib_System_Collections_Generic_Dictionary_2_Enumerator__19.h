#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct Dictionary_2_t562;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  Enumerator_t2147 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::dictionary
	Dictionary_2_t562 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::current
	KeyValuePair_2_t2146  ___current_3;
};
