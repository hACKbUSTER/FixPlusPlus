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

// System.OutOfMemoryException
struct OutOfMemoryException_t1771;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OutOfMemoryException::.ctor()
extern "C" void OutOfMemoryException__ctor_m11050 (OutOfMemoryException_t1771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OutOfMemoryException__ctor_m11051 (OutOfMemoryException_t1771 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
