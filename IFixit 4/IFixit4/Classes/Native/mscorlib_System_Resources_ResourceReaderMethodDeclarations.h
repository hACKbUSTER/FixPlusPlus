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

// System.Resources.ResourceReader
struct ResourceReader_t1441;
// System.IO.Stream
struct Stream_t894;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t1443;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Resources.ResourceReader::.ctor(System.IO.Stream)
extern "C" void ResourceReader__ctor_m8919 (ResourceReader_t1441 * __this, Stream_t894 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::.ctor(System.String)
extern "C" void ResourceReader__ctor_m8920 (ResourceReader_t1441 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceReader::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ResourceReader_System_Collections_IEnumerable_GetEnumerator_m8921 (ResourceReader_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::System.IDisposable.Dispose()
extern "C" void ResourceReader_System_IDisposable_Dispose_m8922 (ResourceReader_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::ReadHeaders()
extern "C" void ResourceReader_ReadHeaders_m8923 (ResourceReader_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::CreateResourceInfo(System.Int64,System.Resources.ResourceReader/ResourceInfo&)
extern "C" void ResourceReader_CreateResourceInfo_m8924 (ResourceReader_t1441 * __this, int64_t ___position, ResourceInfo_t1438 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Resources.ResourceReader::Read7BitEncodedInt()
extern "C" int32_t ResourceReader_Read7BitEncodedInt_m8925 (ResourceReader_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadValueVer2(System.Int32)
extern "C" Object_t * ResourceReader_ReadValueVer2_m8926 (ResourceReader_t1441 * __this, int32_t ___type_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadValueVer1(System.Type)
extern "C" Object_t * ResourceReader_ReadValueVer1_m8927 (ResourceReader_t1441 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadNonPredefinedValue(System.Type)
extern "C" Object_t * ResourceReader_ReadNonPredefinedValue_m8928 (ResourceReader_t1441 * __this, Type_t * ___exp_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::LoadResourceValues(System.Resources.ResourceReader/ResourceCacheItem[])
extern "C" void ResourceReader_LoadResourceValues_m8929 (ResourceReader_t1441 * __this, ResourceCacheItemU5BU5D_t1443* ___store, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::Close()
extern "C" void ResourceReader_Close_m8930 (ResourceReader_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceReader::GetEnumerator()
extern "C" Object_t * ResourceReader_GetEnumerator_m8931 (ResourceReader_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::Dispose(System.Boolean)
extern "C" void ResourceReader_Dispose_m8932 (ResourceReader_t1441 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
