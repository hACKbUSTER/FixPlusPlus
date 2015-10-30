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

// Vuforia.DataSetImpl
struct DataSetImpl_t446;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t631;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t432;
// Vuforia.TrackableSource
struct TrackableSource_t487;
// UnityEngine.GameObject
struct GameObject_t4;
// Vuforia.Trackable
struct Trackable_t431;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Storag.h"

// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C" IntPtr_t DataSetImpl_get_DataSetPtr_m2147 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetImpl::get_Path()
extern "C" String_t* DataSetImpl_get_Path_m2148 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::get_FileStorageType()
extern "C" int32_t DataSetImpl_get_FileStorageType_m2149 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::.ctor(System.IntPtr)
extern "C" void DataSetImpl__ctor_m2150 (DataSetImpl_t446 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String)
extern "C" bool DataSetImpl_Load_m2151 (DataSetImpl_t446 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool DataSetImpl_Load_m2152 (DataSetImpl_t446 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSetImpl::GetTrackables()
extern "C" Object_t* DataSetImpl_GetTrackables_m2153 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,System.String)
extern "C" DataSetTrackableBehaviour_t432 * DataSetImpl_CreateTrackable_m2154 (DataSetImpl_t446 * __this, TrackableSource_t487 * ___trackableSource, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C" DataSetTrackableBehaviour_t432 * DataSetImpl_CreateTrackable_m2155 (DataSetImpl_t446 * __this, TrackableSource_t487 * ___trackableSource, GameObject_t4 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Destroy(Vuforia.Trackable,System.Boolean)
extern "C" bool DataSetImpl_Destroy_m2156 (DataSetImpl_t446 * __this, Object_t * ___trackable, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::HasReachedTrackableLimit()
extern "C" bool DataSetImpl_HasReachedTrackableLimit_m2157 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Contains(Vuforia.Trackable)
extern "C" bool DataSetImpl_Contains_m2158 (DataSetImpl_t446 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::DestroyAllTrackables(System.Boolean)
extern "C" void DataSetImpl_DestroyAllTrackables_m2159 (DataSetImpl_t446 * __this, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::ExistsImpl(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool DataSetImpl_ExistsImpl_m2160 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateImageTargets()
extern "C" bool DataSetImpl_CreateImageTargets_m2161 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateMultiTargets()
extern "C" bool DataSetImpl_CreateMultiTargets_m2162 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateCylinderTargets()
extern "C" bool DataSetImpl_CreateCylinderTargets_m2163 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateObjectTargets()
extern "C" bool DataSetImpl_CreateObjectTargets_m2164 (DataSetImpl_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
