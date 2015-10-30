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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11249_gshared (Nullable_1_t1837 * __this, TimeSpan_t686  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11249(__this, ___value, method) (( void (*) (Nullable_1_t1837 *, TimeSpan_t686 , const MethodInfo*))Nullable_1__ctor_m11249_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11250_gshared (Nullable_1_t1837 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11250(__this, method) (( bool (*) (Nullable_1_t1837 *, const MethodInfo*))Nullable_1_get_HasValue_m11250_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t686  Nullable_1_get_Value_m11251_gshared (Nullable_1_t1837 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11251(__this, method) (( TimeSpan_t686  (*) (Nullable_1_t1837 *, const MethodInfo*))Nullable_1_get_Value_m11251_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17719_gshared (Nullable_1_t1837 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17719(__this, ___other, method) (( bool (*) (Nullable_1_t1837 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17719_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17720_gshared (Nullable_1_t1837 * __this, Nullable_1_t1837  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17720(__this, ___other, method) (( bool (*) (Nullable_1_t1837 *, Nullable_1_t1837 , const MethodInfo*))Nullable_1_Equals_m17720_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17721_gshared (Nullable_1_t1837 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17721(__this, method) (( int32_t (*) (Nullable_1_t1837 *, const MethodInfo*))Nullable_1_GetHashCode_m17721_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17722_gshared (Nullable_1_t1837 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17722(__this, method) (( String_t* (*) (Nullable_1_t1837 *, const MethodInfo*))Nullable_1_ToString_m17722_gshared)(__this, method)
