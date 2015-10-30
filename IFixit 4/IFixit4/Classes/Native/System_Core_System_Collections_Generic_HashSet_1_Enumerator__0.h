#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2245;
// System.Object
struct Object_t;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct  Enumerator_t2249 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator<System.Object>::hashset
	HashSet_1_t2245 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::current
	Object_t * ___current_3;
};
