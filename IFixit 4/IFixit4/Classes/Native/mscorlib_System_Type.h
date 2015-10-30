#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t370;
// System.Reflection.MemberFilter
struct MemberFilter_t1169;
// System.Object
struct Object_t;

#include "mscorlib_System_Reflection_MemberInfo.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Type
struct  Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1168  ____impl_1;
};
struct Type_t_StaticFields{
	// System.Char System.Type::Delimiter
	uint16_t ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t370* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1169 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1169 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1169 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	Object_t * ___Missing_7;
};
