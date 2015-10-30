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

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t42;
// Vuforia.MultiTarget
struct MultiTarget_t608;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t450;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C" Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m3466 (MultiTargetAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m3467 (MultiTargetAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m3468 (MultiTargetAbstractBehaviour_t42 * __this, Vector3_t10 * ___boundsMin, Vector3_t10 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m3469 (MultiTargetAbstractBehaviour_t42 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m3470 (MultiTargetAbstractBehaviour_t42 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C" void MultiTargetAbstractBehaviour__ctor_m214 (MultiTargetAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3471 (MultiTargetAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3472 (MultiTargetAbstractBehaviour_t42 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t78 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3473 (MultiTargetAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t4 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3474 (MultiTargetAbstractBehaviour_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
