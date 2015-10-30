#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t2258;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2259;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct  LinkedListNode_1_t2259  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1<System.Object>::item
	Object_t * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::container
	LinkedList_1_t2258 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::forward
	LinkedListNode_1_t2259 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::back
	LinkedListNode_1_t2259 * ___back_3;
};
