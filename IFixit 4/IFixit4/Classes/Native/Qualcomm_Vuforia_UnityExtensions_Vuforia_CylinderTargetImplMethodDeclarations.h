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

// Vuforia.CylinderTargetImpl
struct CylinderTargetImpl_t471;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t461;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.CylinderTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void CylinderTargetImpl__ctor_m2111 (CylinderTargetImpl_t471 * __this, String_t* ___name, int32_t ___id, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CylinderTargetImpl_SetSize_m2112 (CylinderTargetImpl_t471 * __this, Vector3_t10  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetSideLength()
extern "C" float CylinderTargetImpl_GetSideLength_m2113 (CylinderTargetImpl_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetTopDiameter()
extern "C" float CylinderTargetImpl_GetTopDiameter_m2114 (CylinderTargetImpl_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetBottomDiameter()
extern "C" float CylinderTargetImpl_GetBottomDiameter_m2115 (CylinderTargetImpl_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetSideLength(System.Single)
extern "C" bool CylinderTargetImpl_SetSideLength_m2116 (CylinderTargetImpl_t471 * __this, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetTopDiameter_m2117 (CylinderTargetImpl_t471 * __this, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetBottomDiameter_m2118 (CylinderTargetImpl_t471 * __this, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::ScaleCylinder(System.Single)
extern "C" void CylinderTargetImpl_ScaleCylinder_m2119 (CylinderTargetImpl_t471 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
