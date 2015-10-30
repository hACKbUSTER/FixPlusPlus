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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t491;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t475;
// Vuforia.TargetFinder
struct TargetFinder_t494;
// Vuforia.DataSet
struct DataSet_t461;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t632;

#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C" ImageTargetBuilder_t475 * ObjectTrackerImpl_get_ImageTargetBuilder_m2208 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C" TargetFinder_t494 * ObjectTrackerImpl_get_TargetFinder_m2209 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C" void ObjectTrackerImpl__ctor_m2210 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C" bool ObjectTrackerImpl_Start_m2211 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C" void ObjectTrackerImpl_Stop_m2212 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C" DataSet_t461 * ObjectTrackerImpl_CreateDataSet_m2213 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C" bool ObjectTrackerImpl_DestroyDataSet_m2214 (ObjectTrackerImpl_t491 * __this, DataSet_t461 * ___dataSet, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_ActivateDataSet_m2215 (ObjectTrackerImpl_t491 * __this, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_DeactivateDataSet_m2216 (ObjectTrackerImpl_t491 * __this, DataSet_t461 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetActiveDataSets_m2217 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetDataSets_m2218 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C" void ObjectTrackerImpl_DestroyAllDataSets_m2219 (ObjectTrackerImpl_t491 * __this, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C" bool ObjectTrackerImpl_PersistExtendedTracking_m2220 (ObjectTrackerImpl_t491 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C" bool ObjectTrackerImpl_ResetExtendedTracking_m2221 (ObjectTrackerImpl_t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
