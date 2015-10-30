#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t96;

#include "codegen/il2cpp-codegen.h"

// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m5146 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String,System.Object[])
extern "C" String_t* Locale_GetText_m5147 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t96* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
