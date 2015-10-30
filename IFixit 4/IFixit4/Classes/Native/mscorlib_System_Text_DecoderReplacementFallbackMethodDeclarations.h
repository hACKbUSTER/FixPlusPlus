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

// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1678;
// System.String
struct String_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1674;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderReplacementFallback::.ctor()
extern "C" void DecoderReplacementFallback__ctor_m10058 (DecoderReplacementFallback_t1678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
extern "C" void DecoderReplacementFallback__ctor_m10059 (DecoderReplacementFallback_t1678 * __this, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.DecoderReplacementFallback::get_DefaultString()
extern "C" String_t* DecoderReplacementFallback_get_DefaultString_m10060 (DecoderReplacementFallback_t1678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.DecoderReplacementFallback::CreateFallbackBuffer()
extern "C" DecoderFallbackBuffer_t1674 * DecoderReplacementFallback_CreateFallbackBuffer_m10061 (DecoderReplacementFallback_t1678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallback::Equals(System.Object)
extern "C" bool DecoderReplacementFallback_Equals_m10062 (DecoderReplacementFallback_t1678 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallback::GetHashCode()
extern "C" int32_t DecoderReplacementFallback_GetHashCode_m10063 (DecoderReplacementFallback_t1678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
