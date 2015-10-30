#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t527;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t689;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>
struct  Enumerator_t2105 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::list
	LinkedList_1_t527 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::current
	LinkedListNode_1_t689 * ___current_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::index
	int32_t ___index_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator<System.Int32>::version
	uint32_t ___version_3;
};
