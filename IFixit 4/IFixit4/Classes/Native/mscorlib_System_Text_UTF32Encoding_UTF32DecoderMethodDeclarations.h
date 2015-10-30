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

// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t1689;
// System.Byte[]
struct ByteU5BU5D_t485;
// System.Char[]
struct CharU5BU5D_t411;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Boolean)
extern "C" void UTF32Decoder__ctor_m10170 (UTF32Decoder_t1689 * __this, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF32Decoder_GetChars_m10171 (UTF32Decoder_t1689 * __this, ByteU5BU5D_t485* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t411* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
