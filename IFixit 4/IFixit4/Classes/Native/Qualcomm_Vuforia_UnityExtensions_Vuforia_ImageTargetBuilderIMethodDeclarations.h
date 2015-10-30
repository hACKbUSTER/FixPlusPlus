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

// Vuforia.ImageTargetBuilderImpl
struct ImageTargetBuilderImpl_t486;
// System.String
struct String_t;
// Vuforia.TrackableSource
struct TrackableSource_t487;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_.h"

// System.Boolean Vuforia.ImageTargetBuilderImpl::Build(System.String,System.Single)
extern "C" bool ImageTargetBuilderImpl_Build_m2189 (ImageTargetBuilderImpl_t486 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StartScan()
extern "C" void ImageTargetBuilderImpl_StartScan_m2190 (ImageTargetBuilderImpl_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StopScan()
extern "C" void ImageTargetBuilderImpl_StopScan_m2191 (ImageTargetBuilderImpl_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.ImageTargetBuilderImpl::GetFrameQuality()
extern "C" int32_t ImageTargetBuilderImpl_GetFrameQuality_m2192 (ImageTargetBuilderImpl_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableSource Vuforia.ImageTargetBuilderImpl::GetTrackableSource()
extern "C" TrackableSource_t487 * ImageTargetBuilderImpl_GetTrackableSource_m2193 (ImageTargetBuilderImpl_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::.ctor()
extern "C" void ImageTargetBuilderImpl__ctor_m2194 (ImageTargetBuilderImpl_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
