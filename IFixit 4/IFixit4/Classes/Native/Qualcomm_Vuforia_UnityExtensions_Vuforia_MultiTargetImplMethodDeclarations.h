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

// Vuforia.MultiTargetImpl
struct MultiTargetImpl_t499;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t461;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.MultiTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void MultiTargetImpl__ctor_m2240 (MultiTargetImpl_t499 * __this, String_t* ___name, int32_t ___id, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.MultiTargetImpl::GetSize()
extern "C" Vector3_t10  MultiTargetImpl_GetSize_m2241 (MultiTargetImpl_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void MultiTargetImpl_SetSize_m2242 (MultiTargetImpl_t499 * __this, Vector3_t10  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
