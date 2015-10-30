#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t93;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
struct  Enumerator_t94 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::l
	List_1_t93 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>::current
	MethodInfo_t * ___current_3;
};
