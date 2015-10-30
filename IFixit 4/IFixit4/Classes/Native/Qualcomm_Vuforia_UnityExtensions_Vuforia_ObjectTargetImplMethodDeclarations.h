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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t445;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t461;
// Vuforia.DataSetImpl
struct DataSetImpl_t446;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void ObjectTargetImpl__ctor_m1946 (ObjectTargetImpl_t445 * __this, String_t* ___name, int32_t ___id, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C" Vector3_t10  ObjectTargetImpl_GetSize_m1947 (ObjectTargetImpl_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void ObjectTargetImpl_SetSize_m1948 (ObjectTargetImpl_t445 * __this, Vector3_t10  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C" bool ObjectTargetImpl_StartExtendedTracking_m1949 (ObjectTargetImpl_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C" bool ObjectTargetImpl_StopExtendedTracking_m1950 (ObjectTargetImpl_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C" DataSetImpl_t446 * ObjectTargetImpl_get_DataSet_m1951 (ObjectTargetImpl_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
