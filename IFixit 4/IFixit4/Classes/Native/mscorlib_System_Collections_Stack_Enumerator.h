#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t358;

#include "mscorlib_System_Object.h"

// System.Collections.Stack/Enumerator
struct  Enumerator_t1287  : public Object_t
{
	// System.Collections.Stack System.Collections.Stack/Enumerator::stack
	Stack_t358 * ___stack_0;
	// System.Int32 System.Collections.Stack/Enumerator::modCount
	int32_t ___modCount_1;
	// System.Int32 System.Collections.Stack/Enumerator::current
	int32_t ___current_2;
};
