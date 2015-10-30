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

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t551;
// UnityEngine.Texture
struct Texture_t168;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m2373 (WebCamTexAdaptorImpl_t551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C" bool WebCamTexAdaptorImpl_get_IsPlaying_m2374 (WebCamTexAdaptorImpl_t551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C" Texture_t168 * WebCamTexAdaptorImpl_get_Texture_m2375 (WebCamTexAdaptorImpl_t551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C" void WebCamTexAdaptorImpl__ctor_m2376 (WebCamTexAdaptorImpl_t551 * __this, String_t* ___deviceName, int32_t ___requestedFPS, Vec2I_t532  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C" void WebCamTexAdaptorImpl_Play_m2377 (WebCamTexAdaptorImpl_t551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C" void WebCamTexAdaptorImpl_Stop_m2378 (WebCamTexAdaptorImpl_t551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
