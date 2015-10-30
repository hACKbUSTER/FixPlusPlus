#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1425;

#include "mscorlib_System_Reflection_PropertyInfo.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#include "mscorlib_System_Reflection_PInfo.h"

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t1423  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1425 * ___cached_getter_4;
};
