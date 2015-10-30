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
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Object::.ctor()
extern "C" void Object__ctor_m179 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::Equals(System.Object)
extern "C" bool Object_Equals_m6110 (Object_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C" bool Object_Equals_m6107 (Object_t * __this /* static, unused */, Object_t * ___objA, Object_t * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C" void Object_Finalize_m1629 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m6111 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C" Type_t * Object_GetType_m187 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Object::MemberwiseClone()
extern "C" Object_t * Object_MemberwiseClone_m6112 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Object::ToString()
extern "C" String_t* Object_ToString_m1719 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C" bool Object_ReferenceEquals_m1668 (Object_t * __this /* static, unused */, Object_t * ___objA, Object_t * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::InternalGetHashCode(System.Object)
extern "C" int32_t Object_InternalGetHashCode_m6113 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
