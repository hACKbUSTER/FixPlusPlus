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


#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_Context.h"
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Boolean)
extern "C" void Context__ctor_m7021 (Context_t1209 * __this, int32_t ___opt, uint8_t* ___alwaysMatchFlags, uint8_t* ___neverMatchFlags, uint8_t* ___buffer1, uint8_t* ___buffer2, uint8_t* ___prev1, bool ___quickCheckPossible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Context_t1209_marshal(const Context_t1209& unmarshaled, Context_t1209_marshaled& marshaled);
extern "C" void Context_t1209_marshal_back(const Context_t1209_marshaled& marshaled, Context_t1209& unmarshaled);
extern "C" void Context_t1209_marshal_cleanup(Context_t1209_marshaled& marshaled);
