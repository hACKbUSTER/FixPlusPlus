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

// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t1685;
// System.String
struct String_t;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1683;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.EncoderReplacementFallback::.ctor()
extern "C" void EncoderReplacementFallback__ctor_m10088 (EncoderReplacementFallback_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
extern "C" void EncoderReplacementFallback__ctor_m10089 (EncoderReplacementFallback_t1685 * __this, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.EncoderReplacementFallback::get_DefaultString()
extern "C" String_t* EncoderReplacementFallback_get_DefaultString_m10090 (EncoderReplacementFallback_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallbackBuffer System.Text.EncoderReplacementFallback::CreateFallbackBuffer()
extern "C" EncoderFallbackBuffer_t1683 * EncoderReplacementFallback_CreateFallbackBuffer_m10091 (EncoderReplacementFallback_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallback::Equals(System.Object)
extern "C" bool EncoderReplacementFallback_Equals_m10092 (EncoderReplacementFallback_t1685 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallback::GetHashCode()
extern "C" int32_t EncoderReplacementFallback_GetHashCode_m10093 (EncoderReplacementFallback_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
