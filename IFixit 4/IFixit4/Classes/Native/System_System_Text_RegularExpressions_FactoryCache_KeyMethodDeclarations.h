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

// System.Text.RegularExpressions.FactoryCache/Key
struct Key_t1082;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Void System.Text.RegularExpressions.FactoryCache/Key::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Key__ctor_m5650 (Key_t1082 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.FactoryCache/Key::GetHashCode()
extern "C" int32_t Key_GetHashCode_m5651 (Key_t1082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.FactoryCache/Key::Equals(System.Object)
extern "C" bool Key_Equals_m5652 (Key_t1082 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.FactoryCache/Key::ToString()
extern "C" String_t* Key_ToString_m5653 (Key_t1082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
