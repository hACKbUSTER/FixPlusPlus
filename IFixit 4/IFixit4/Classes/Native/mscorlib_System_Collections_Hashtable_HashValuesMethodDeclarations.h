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

// System.Collections.Hashtable/HashValues
struct HashValues_t1280;
// System.Collections.Hashtable
struct Hashtable_t879;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Hashtable/HashValues::.ctor(System.Collections.Hashtable)
extern "C" void HashValues__ctor_m7679 (HashValues_t1280 * __this, Hashtable_t879 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/HashValues::get_Count()
extern "C" int32_t HashValues_get_Count_m7680 (HashValues_t1280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/HashValues::get_SyncRoot()
extern "C" Object_t * HashValues_get_SyncRoot_m7681 (HashValues_t1280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/HashValues::CopyTo(System.Array,System.Int32)
extern "C" void HashValues_CopyTo_m7682 (HashValues_t1280 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/HashValues::GetEnumerator()
extern "C" Object_t * HashValues_GetEnumerator_m7683 (HashValues_t1280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
