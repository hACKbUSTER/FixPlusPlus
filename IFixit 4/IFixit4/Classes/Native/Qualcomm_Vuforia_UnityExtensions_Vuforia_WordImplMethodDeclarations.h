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

// Vuforia.WordImpl
struct WordImpl_t552;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t483;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t553;
// Vuforia.ImageImpl
struct ImageImpl_t484;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__6.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C" void WordImpl__ctor_m2379 (WordImpl_t552 * __this, int32_t ___id, String_t* ___text, Vector2_t131  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C" String_t* WordImpl_get_StringValue_m2380 (WordImpl_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C" Vector2_t131  WordImpl_get_Size_m2381 (WordImpl_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C" Image_t483 * WordImpl_GetLetterMask_m2382 (WordImpl_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C" RectangleDataU5BU5D_t553* WordImpl_GetLetterBoundingBoxes_m2383 (WordImpl_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C" void WordImpl_InitImageHeader_m2384 (WordImpl_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C" void WordImpl_CreateLetterMask_m2385 (WordImpl_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C" void WordImpl_SetImageValues_m2386 (Object_t * __this /* static, unused */, ImageHeaderData_t515  ___imageHeader, ImageImpl_t484 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C" void WordImpl_AllocateImage_m2387 (Object_t * __this /* static, unused */, ImageImpl_t484 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
