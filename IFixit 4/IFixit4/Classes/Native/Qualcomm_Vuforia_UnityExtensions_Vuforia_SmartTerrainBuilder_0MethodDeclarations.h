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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t540;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t638;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t46;
// Vuforia.Reconstruction
struct Reconstruction_t579;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t635;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t636;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t637;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m2343 (SmartTerrainBuilderImpl_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m2344 (SmartTerrainBuilderImpl_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m2345 (SmartTerrainBuilderImpl_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m2346 (SmartTerrainBuilderImpl_t540 * __this, ReconstructionAbstractBehaviour_t46 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m2347 (SmartTerrainBuilderImpl_t540 * __this, ReconstructionAbstractBehaviour_t46 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m2348 (SmartTerrainBuilderImpl_t540 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m2349 (SmartTerrainBuilderImpl_t540 * __this, SmartTerrainRevisionDataU5BU5D_t635* ___smartTerrainRevisions, SurfaceDataU5BU5D_t636* ___updatedSurfaces, PropDataU5BU5D_t637* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m2350 (SmartTerrainBuilderImpl_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
