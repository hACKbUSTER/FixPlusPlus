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

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t432;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t48;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t4;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C" void DataSetTrackableBehaviour_OnDrawGizmos_m1841 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void DataSetTrackableBehaviour_OnTrackerUpdate_m1842 (DataSetTrackableBehaviour_t432 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C" bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m1843 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetName()
extern "C" String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetName_m1844 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetPath()
extern "C" String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetPath_m1845 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetDataSetPath(System.String)
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetDataSetPath_m1846 (DataSetTrackableBehaviour_t432 * __this, String_t* ___dataSetPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ExtendedTracking()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ExtendedTracking_m1847 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetExtendedTracking(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetExtendedTracking_m1848 (DataSetTrackableBehaviour_t432 * __this, bool ___extendedTracking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_InitializeSmartTerrain()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_InitializeSmartTerrain_m1849 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetInitializeSmartTerrain(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetInitializeSmartTerrain_m1850 (DataSetTrackableBehaviour_t432 * __this, bool ___initializeSmartTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ReconstructionToInitialize()
extern "C" ReconstructionFromTargetAbstractBehaviour_t48 * DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ReconstructionToInitialize_m1851 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetReconstructionToInitialize_m1852 (DataSetTrackableBehaviour_t432 * __this, ReconstructionFromTargetAbstractBehaviour_t48 * ___reconstructionToInitialize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C" Vector3_t10  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMin_m1853 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMin_m1854 (DataSetTrackableBehaviour_t432 * __this, Vector3_t10  ___occluderBoundsMin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C" Vector3_t10  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMax_m1855 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMax_m1856 (DataSetTrackableBehaviour_t432 * __this, Vector3_t10  ___occluderBoundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_IsSmartTerrainOccluderOffset()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_IsSmartTerrainOccluderOffset_m1857 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetIsSmartTerrainOccluderOffset(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetIsSmartTerrainOccluderOffset_m1858 (DataSetTrackableBehaviour_t432 * __this, bool ___isOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderOffset()
extern "C" Vector3_t10  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderOffset_m1859 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderOffset(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderOffset_m1860 (DataSetTrackableBehaviour_t432 * __this, Vector3_t10  ___occluderOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderRotation()
extern "C" Quaternion_t116  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderRotation_m1861 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderRotation(UnityEngine.Quaternion)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderRotation_m1862 (DataSetTrackableBehaviour_t432 * __this, Quaternion_t116  ___occluderRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderLockedInPlace()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderLockedInPlace_m1863 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetLockSmartTerrainOccluderInPlace(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetLockSmartTerrainOccluderInPlace_m1864 (DataSetTrackableBehaviour_t432 * __this, bool ___lockOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.GetDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_GetDefaultOccluderBounds_m1865 (DataSetTrackableBehaviour_t432 * __this, Vector3_t10 * ___boundsMin, Vector3_t10 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_AutoSetOccluderFromTargetSize()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_AutoSetOccluderFromTargetSize_m1866 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetAutoSetOccluderFromTargetSize(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetAutoSetOccluderFromTargetSize_m1867 (DataSetTrackableBehaviour_t432 * __this, bool ___autoset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C" void DataSetTrackableBehaviour__ctor_m1868 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1869 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1870 (DataSetTrackableBehaviour_t432 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t78 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1871 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t4 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1872 (DataSetTrackableBehaviour_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
