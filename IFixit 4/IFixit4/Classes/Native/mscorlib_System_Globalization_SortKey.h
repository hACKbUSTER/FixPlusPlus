#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t485;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Globalization.SortKey
struct  SortKey_t1217  : public Object_t
{
	// System.String System.Globalization.SortKey::source
	String_t* ___source_0;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options_1;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t485* ___key_2;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid_3;
};
