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

// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t461;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Storag.h"

// System.Boolean Vuforia.DataSet::Exists(System.String)
extern "C" bool DataSet_Exists_m2067 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSet::Exists(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool DataSet_Exists_m2068 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSet::.ctor()
extern "C" void DataSet__ctor_m2069 (DataSet_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
