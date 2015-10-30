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

// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t45;
// Vuforia.Prop
struct Prop_t75;
// UnityEngine.MeshFilter
struct MeshFilter_t104;
// UnityEngine.MeshCollider
struct MeshCollider_t221;
// UnityEngine.BoxCollider
struct BoxCollider_t220;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t4;

#include "codegen/il2cpp-codegen.h"

// Vuforia.Prop Vuforia.PropAbstractBehaviour::get_Prop()
extern "C" Object_t * PropAbstractBehaviour_get_Prop_m3315 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::UpdateMeshAndColliders()
extern "C" void PropAbstractBehaviour_UpdateMeshAndColliders_m3316 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Start()
extern "C" void PropAbstractBehaviour_Start_m3317 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void PropAbstractBehaviour_InternalUnregisterTrackable_m3318 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.InitializeProp(Vuforia.Prop)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_InitializeProp_m3319 (PropAbstractBehaviour_t45 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshFilterToUpdate_m3320 (PropAbstractBehaviour_t45 * __this, MeshFilter_t104 * ___meshFilterToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t104 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshFilterToUpdate_m3321 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshColliderToUpdate_m3322 (PropAbstractBehaviour_t45 * __this, MeshCollider_t221 * ___meshColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t221 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshColliderToUpdate_m3323 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetBoxColliderToUpdate(UnityEngine.BoxCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetBoxColliderToUpdate_m3324 (PropAbstractBehaviour_t45 * __this, BoxCollider_t220 * ___boxColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_BoxColliderToUpdate()
extern "C" BoxCollider_t220 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_BoxColliderToUpdate_m3325 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::.ctor()
extern "C" void PropAbstractBehaviour__ctor_m216 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3326 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3327 (PropAbstractBehaviour_t45 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t78 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3328 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t4 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3329 (PropAbstractBehaviour_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
