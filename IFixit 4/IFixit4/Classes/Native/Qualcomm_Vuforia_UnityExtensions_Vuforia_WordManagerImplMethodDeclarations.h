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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t556;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t639;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t640;
// Vuforia.Word
struct Word_t565;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t74;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t641;
// UnityEngine.Transform
struct Transform_t78;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t525;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t526;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t642;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t643;
// Vuforia.WordResult
struct WordResult_t563;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C" Object_t* WordManagerImpl_GetActiveWordResults_m2389 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C" Object_t* WordManagerImpl_GetNewWords_m2390 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C" Object_t* WordManagerImpl_GetLostWords_m2391 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C" bool WordManagerImpl_TryGetWordBehaviour_m2392 (WordManagerImpl_t556 * __this, Object_t * ___word, WordAbstractBehaviour_t74 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* WordManagerImpl_GetTrackableBehaviours_m2393 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C" void WordManagerImpl_DestroyWordBehaviour_m2394 (WordManagerImpl_t556 * __this, WordAbstractBehaviour_t74 * ___behaviour, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m2395 (WordManagerImpl_t556 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m2396 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C" void WordManagerImpl_RemoveDestroyedTrackables_m2397 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void WordManagerImpl_UpdateWords_m2398 (WordManagerImpl_t556 * __this, Transform_t78 * ___arCameraTransform, WordDataU5BU5D_t525* ___newWordData, WordResultDataU5BU5D_t526* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C" void WordManagerImpl_SetWordBehavioursToNotFound_m2399 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C" void WordManagerImpl_CleanupWordBehaviours_m2400 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWords_m2401 (WordManagerImpl_t556 * __this, Object_t* ___newWordData, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWordResultPoses_m2402 (WordManagerImpl_t556 * __this, Transform_t78 * ___arCameraTransform, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C" void WordManagerImpl_AssociateWordResultsWithBehaviours_m2403 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C" void WordManagerImpl_UnregisterLostWords_m2404 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C" void WordManagerImpl_UpdateWordBehaviourPoses_m2405 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C" WordAbstractBehaviour_t74 * WordManagerImpl_AssociateWordBehaviour_m2406 (WordManagerImpl_t556 * __this, WordResult_t563 * ___wordResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t74 * WordManagerImpl_AssociateWordBehaviour_m2407 (WordManagerImpl_t556 * __this, WordResult_t563 * ___wordResult, WordAbstractBehaviour_t74 * ___wordBehaviourTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t74 * WordManagerImpl_InstantiateWordBehaviour_m2408 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t74 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C" WordAbstractBehaviour_t74 * WordManagerImpl_CreateWordBehaviour_m2409 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C" void WordManagerImpl__ctor_m2410 (WordManagerImpl_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
