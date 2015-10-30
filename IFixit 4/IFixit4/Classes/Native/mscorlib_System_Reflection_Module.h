#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.TypeFilter
struct TypeFilter_t1418;
// System.Reflection.Assembly
struct Assembly_t1150;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_IntPtr.h"

// System.Reflection.Module
struct  Module_t1370  : public Object_t
{
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t1150 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;
};
struct Module_t1370_StaticFields{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t1418 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t1418 * ___FilterTypeNameIgnoreCase_2;
};
