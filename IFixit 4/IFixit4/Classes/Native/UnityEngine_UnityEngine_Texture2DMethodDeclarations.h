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

// UnityEngine.Texture2D
struct Texture2D_t3;
// UnityEngine.Color[]
struct ColorU5BU5D_t367;
// UnityEngine.Color32[]
struct Color32U5BU5D_t368;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m475 (Texture2D_t3 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture2D__ctor_m476 (Texture2D_t3 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m477 (Object_t * __this /* static, unused */, Texture2D_t3 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" int32_t Texture2D_get_format_m478 (Texture2D_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" void Texture2D_SetPixels_m479 (Texture2D_t3 * __this, ColorU5BU5D_t367* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m480 (Texture2D_t3 * __this, ColorU5BU5D_t367* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m481 (Texture2D_t3 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, ColorU5BU5D_t367* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetAllPixels32_m482 (Texture2D_t3 * __this, Color32U5BU5D_t368* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" void Texture2D_SetPixels32_m483 (Texture2D_t3 * __this, Color32U5BU5D_t368* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetPixels32_m484 (Texture2D_t3 * __this, Color32U5BU5D_t368* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" ColorU5BU5D_t367* Texture2D_GetPixels_m485 (Texture2D_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" ColorU5BU5D_t367* Texture2D_GetPixels_m486 (Texture2D_t3 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" ColorU5BU5D_t367* Texture2D_GetPixels_m487 (Texture2D_t3 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C" Color32U5BU5D_t368* Texture2D_GetPixels32_m488 (Texture2D_t3 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C" Color32U5BU5D_t368* Texture2D_GetPixels32_m489 (Texture2D_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m490 (Texture2D_t3 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C" void Texture2D_Apply_m491 (Texture2D_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" bool Texture2D_Resize_m492 (Texture2D_t3 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___hasMipMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" void Texture2D_ReadPixels_m493 (Texture2D_t3 * __this, Rect_t82  ___source, int32_t ___destX, int32_t ___destY, bool ___recalculateMipMaps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_ReadPixels(UnityEngine.Texture2D,UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C" void Texture2D_INTERNAL_CALL_ReadPixels_m494 (Object_t * __this /* static, unused */, Texture2D_t3 * ___self, Rect_t82 * ___source, int32_t ___destX, int32_t ___destY, bool ___recalculateMipMaps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
