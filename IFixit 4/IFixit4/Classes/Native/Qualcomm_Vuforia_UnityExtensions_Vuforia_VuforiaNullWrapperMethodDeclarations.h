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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t568;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t410;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m2761 (VuforiaNullWrapper_t568 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m2762 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m2763 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m2764 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m2765 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNullWrapper_CameraDeviceGetVideoMode_m2766 (VuforiaNullWrapper_t568 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m2767 (VuforiaNullWrapper_t568 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m2768 (VuforiaNullWrapper_t568 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m2769 (VuforiaNullWrapper_t568 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m2770 (VuforiaNullWrapper_t568 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m2771 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetFrameFormat_m2772 (VuforiaNullWrapper_t568 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetExists_m2773 (VuforiaNullWrapper_t568 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetLoad_m2774 (VuforiaNullWrapper_t568 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m2775 (VuforiaNullWrapper_t568 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m2776 (VuforiaNullWrapper_t568 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackableName_m2777 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t410 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetCreateTrackable_m2778 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t410 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m2779 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m2780 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNullWrapper_GetCameraThreadID_m2781 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m2782 (VuforiaNullWrapper_t568 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m2783 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStartScan_m2784 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStopScan_m2785 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m2786 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m2787 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m2788 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m2789 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonGetId_m2790 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m2791 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m2792 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m2793 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t410 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m2794 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m2795 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m2796 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m2797 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetSetSize_m2798 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetGetSize_m2799 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerStart_m2800 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ObjectTrackerStop()
extern "C" void VuforiaNullWrapper_ObjectTrackerStop_m2801 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m2802 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m2803 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m2804 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m2805 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m2806 (VuforiaNullWrapper_t568 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m2807 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerStart_m2808 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::MarkerTrackerStop()
extern "C" void VuforiaNullWrapper_MarkerTrackerStop_m2809 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_OnSurfaceChanged_m2810 (VuforiaNullWrapper_t568 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C" void VuforiaNullWrapper_OnPause_m2811 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C" void VuforiaNullWrapper_OnResume_m2812 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m2813 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerSetSize_m2814 (VuforiaNullWrapper_t568 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m2815 (VuforiaNullWrapper_t568 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m2816 (VuforiaNullWrapper_t568 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C" void VuforiaNullWrapper_InitPlatformNative_m2817 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_InitFrameState_m2818 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_DeinitFrameState_m2819 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_UpdateQCAR_m2820 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C" void VuforiaNullWrapper_RendererEnd_m2821 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarGetBufferSize_m2822 (VuforiaNullWrapper_t568 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_QcarAddCameraFrame_m2823 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m2824 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m2825 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m2826 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m2827 (VuforiaNullWrapper_t568 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m2828 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m2829 (VuforiaNullWrapper_t568 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetHint_m2830 (VuforiaNullWrapper_t568 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_GetProjectionGL_m2831 (VuforiaNullWrapper_t568 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_SetApplicationEnvironment_m2832 (VuforiaNullWrapper_t568 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNullWrapper_SetStateBufferSize_m2833 (VuforiaNullWrapper_t568 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNullWrapper_SmartTerrainTrackerStart_m2834 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNullWrapper_SmartTerrainTrackerStop_m2835 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m2836 (VuforiaNullWrapper_t568 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m2837 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m2838 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m2839 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m2840 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m2841 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m2842 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m2843 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStart_m2844 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStop_m2845 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionIsReconstructing_m2846 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionReset_m2847 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m2848 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m2849 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m2850 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m2851 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartInit_m2852 (VuforiaNullWrapper_t568 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetInitState_m2853 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNullWrapper_TargetFinderDeinit_m2854 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m2855 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStop_m2856 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIScanlineColor_m2857 (VuforiaNullWrapper_t568 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIPointColor_m2858 (VuforiaNullWrapper_t568 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderUpdate_m2859 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetResults_m2860 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m2861 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderGetImageTargets_m2862 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNullWrapper_TargetFinderClearTrackables_m2863 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNullWrapper_TextTrackerStart_m2864 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerStop()
extern "C" void VuforiaNullWrapper_TextTrackerStop_m2865 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m2866 (VuforiaNullWrapper_t568 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m2867 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadWordList_m2868 (VuforiaNullWrapper_t568 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m2869 (VuforiaNullWrapper_t568 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordU_m2870 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordU_m2871 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListContainsWordU_m2872 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNullWrapper_WordListUnloadAllLists_m2873 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListSetFilterMode_m2874 (VuforiaNullWrapper_t568 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterMode_m2875 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadFilterList_m2876 (VuforiaNullWrapper_t568 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m2877 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m2878 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNullWrapper_WordListClearFilterList_m2879 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m2880 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m2881 (VuforiaNullWrapper_t568 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterMask_m2882 (VuforiaNullWrapper_t568 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m2883 (VuforiaNullWrapper_t568 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m2884 (VuforiaNullWrapper_t568 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m2885 (VuforiaNullWrapper_t568 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m2886 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m2887 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m2888 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNullWrapper_QcarInit_m2889 (VuforiaNullWrapper_t568 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C" int32_t VuforiaNullWrapper_QcarDeinit_m2890 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StartExtendedTracking_m2891 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StopExtendedTracking_m2892 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNullWrapper_EyewearIsDeviceDetected_m2893 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetPresent_m2894 (VuforiaNullWrapper_t568 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetNotPresent_m2895 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNullWrapper_EyewearIsSeeThru_m2896 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNullWrapper_EyewearGetScreenOrientation_m2897 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoCapable_m2898 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoEnabled_m2899 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoGLOnly_m2900 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetStereo_m2901 (VuforiaNullWrapper_t568 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsPredictiveTrackingEnabled_m2902 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetPredictiveTracking_m2903 (VuforiaNullWrapper_t568 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNullWrapper_EyewearSetProjectionClippingPlanes_m2904 (VuforiaNullWrapper_t568 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_EyewearGetProjectionMatrix_m2905 (VuforiaNullWrapper_t568 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m2906 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m2907 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m2908 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m2909 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m2910 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetProjectionMatrix_m2911 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProjectionMatrix_m2912 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m2913 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProfileName_m2914 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMClearProfile_m2915 (VuforiaNullWrapper_t568 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorInit_m2916 (VuforiaNullWrapper_t568 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m2917 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m2918 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m2919 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m2920 (VuforiaNullWrapper_t568 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C" void VuforiaNullWrapper__ctor_m2921 (VuforiaNullWrapper_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
