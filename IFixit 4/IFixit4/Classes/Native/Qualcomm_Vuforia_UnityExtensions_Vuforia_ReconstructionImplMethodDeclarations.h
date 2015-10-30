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

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t441;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionImpl__ctor_m1915 (ReconstructionImpl_t441 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C" IntPtr_t ReconstructionImpl_get_NativePtr_m1916 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C" bool ReconstructionImpl_SetMaximumArea_m1917 (ReconstructionImpl_t441 * __this, Rect_t82  ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C" bool ReconstructionImpl_GetMaximumArea_m1918 (ReconstructionImpl_t441 * __this, Rect_t82 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C" bool ReconstructionImpl_Stop_m1919 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C" bool ReconstructionImpl_Start_m1920 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C" bool ReconstructionImpl_IsReconstructing_m1921 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C" void ReconstructionImpl_SetNavMeshPadding_m1922 (ReconstructionImpl_t441 * __this, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C" float ReconstructionImpl_get_NavMeshPadding_m1923 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C" void ReconstructionImpl_StartNavMeshUpdates_m1924 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C" void ReconstructionImpl_StopNavMeshUpdates_m1925 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C" bool ReconstructionImpl_IsNavMeshUpdating_m1926 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C" bool ReconstructionImpl_Reset_m1927 (ReconstructionImpl_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
