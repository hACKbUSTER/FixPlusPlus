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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t581;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t651;
// Vuforia.WordManager
struct WordManager_t555;
// Vuforia.Trackable
struct Trackable_t431;
// Vuforia.DataSet
struct DataSet_t461;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t25;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t30;
// Vuforia.ImageTarget
struct ImageTarget_t601;
// UnityEngine.GameObject
struct GameObject_t4;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t38;
// Vuforia.Marker
struct Marker_t607;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t527;
// UnityEngine.Transform
struct Transform_t78;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t524;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t525;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t526;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t650;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t42;
// Vuforia.MultiTarget
struct MultiTarget_t608;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t16;
// Vuforia.CylinderTarget
struct CylinderTarget_t459;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t44;
// Vuforia.ObjectTarget
struct ObjectTarget_t433;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m3331 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m3332 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t555 * StateManagerImpl_GetWordManager_m3333 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m3334 (StateManagerImpl_t581 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m3335 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m3336 (StateManagerImpl_t581 * __this, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m3337 (StateManagerImpl_t581 * __this, TrackableBehaviour_t25 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m3338 (StateManagerImpl_t581 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m3339 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m3340 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t30 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m3341 (StateManagerImpl_t581 * __this, Object_t * ___trackable, GameObject_t4 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t30 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m3342 (StateManagerImpl_t581 * __this, Object_t * ___trackable, GameObject_t4 * ___gameObject, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t38 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m3343 (StateManagerImpl_t581 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t38 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m3344 (StateManagerImpl_t581 * __this, Object_t * ___trackable, GameObject_t4 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m3345 (StateManagerImpl_t581 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m3346 (StateManagerImpl_t581 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m3347 (StateManagerImpl_t581 * __this, LinkedList_1_t527 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m3348 (StateManagerImpl_t581 * __this, Transform_t78 * ___cameraTransform, Transform_t78 * ___parentTransformToUpdate, TrackableResultDataU5BU5D_t524* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m3349 (StateManagerImpl_t581 * __this, Transform_t78 * ___arCameraTransform, TrackableResultDataU5BU5D_t524* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m3350 (StateManagerImpl_t581 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m3351 (StateManagerImpl_t581 * __this, Transform_t78 * ___arCameraTransform, WordDataU5BU5D_t525* ___wordData, WordResultDataU5BU5D_t526* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m3352 (StateManagerImpl_t581 * __this, VirtualButtonAbstractBehaviourU5BU5D_t650* ___vbBehaviours, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m3353 (StateManagerImpl_t581 * __this, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t30 * StateManagerImpl_CreateImageTargetBehaviour_m3354 (StateManagerImpl_t581 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t42 * StateManagerImpl_CreateMultiTargetBehaviour_m3355 (StateManagerImpl_t581 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t16 * StateManagerImpl_CreateCylinderTargetBehaviour_m3356 (StateManagerImpl_t581 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t44 * StateManagerImpl_CreateObjectTargetBehaviour_m3357 (StateManagerImpl_t581 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m3358 (StateManagerImpl_t581 * __this, MarkerAbstractBehaviour_t38 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m3359 (StateManagerImpl_t581 * __this, TrackableBehaviour_t25 * ___trackableBehaviour, Transform_t78 * ___cameraTransform, Transform_t78 * ___parentTransformToUpdate, PoseData_t508  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Vector3_t10  StateManagerImpl_ExtractTranslationFromMatrix_m3360 (Object_t * __this /* static, unused */, Matrix4x4_t115  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Quaternion_t116  StateManagerImpl_ExtractRotationFromMatrix_m3361 (Object_t * __this /* static, unused */, Matrix4x4_t115  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m3362 (StateManagerImpl_t581 * __this, TrackableBehaviour_t25 * ___trackableBehaviour, Transform_t78 * ___arCameraTransform, PoseData_t508  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m3363 (StateManagerImpl_t581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
