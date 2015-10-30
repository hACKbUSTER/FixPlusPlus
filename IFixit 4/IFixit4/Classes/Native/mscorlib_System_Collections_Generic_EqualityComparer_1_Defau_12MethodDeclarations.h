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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>
struct DefaultComparer_t2339;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m17409_gshared (DefaultComparer_t2339 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17409(__this, method) (( void (*) (DefaultComparer_t2339 *, const MethodInfo*))DefaultComparer__ctor_m17409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17410_gshared (DefaultComparer_t2339 * __this, CustomAttributeTypedArgument_t1409  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17410(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2339 *, CustomAttributeTypedArgument_t1409 , const MethodInfo*))DefaultComparer_GetHashCode_m17410_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17411_gshared (DefaultComparer_t2339 * __this, CustomAttributeTypedArgument_t1409  ___x, CustomAttributeTypedArgument_t1409  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17411(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2339 *, CustomAttributeTypedArgument_t1409 , CustomAttributeTypedArgument_t1409 , const MethodInfo*))DefaultComparer_Equals_m17411_gshared)(__this, ___x, ___y, method)
