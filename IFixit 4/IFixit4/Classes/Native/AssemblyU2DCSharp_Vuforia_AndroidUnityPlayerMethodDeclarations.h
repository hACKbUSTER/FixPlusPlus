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

// Vuforia.AndroidUnityPlayer
struct AndroidUnityPlayer_t31;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// System.Void Vuforia.AndroidUnityPlayer::.ctor()
extern "C" void AndroidUnityPlayer__ctor_m45 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibraries()
extern "C" void AndroidUnityPlayer_LoadNativeLibraries_m46 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializePlatform()
extern "C" void AndroidUnityPlayer_InitializePlatform_m47 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.AndroidUnityPlayer::Start(System.String)
extern "C" int32_t AndroidUnityPlayer_Start_m48 (AndroidUnityPlayer_t31 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Update()
extern "C" void AndroidUnityPlayer_Update_m49 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnPause()
extern "C" void AndroidUnityPlayer_OnPause_m50 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnResume()
extern "C" void AndroidUnityPlayer_OnResume_m51 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnDestroy()
extern "C" void AndroidUnityPlayer_OnDestroy_m52 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Dispose()
extern "C" void AndroidUnityPlayer_Dispose_m53 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibrariesFromJava()
extern "C" void AndroidUnityPlayer_LoadNativeLibrariesFromJava_m54 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitAndroidPlatform()
extern "C" void AndroidUnityPlayer_InitAndroidPlatform_m55 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.AndroidUnityPlayer::InitVuforia(System.String)
extern "C" int32_t AndroidUnityPlayer_InitVuforia_m56 (AndroidUnityPlayer_t31 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializeSurface()
extern "C" void AndroidUnityPlayer_InitializeSurface_m57 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::ResetUnityScreenOrientation()
extern "C" void AndroidUnityPlayer_ResetUnityScreenOrientation_m58 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::CheckOrientation()
extern "C" void AndroidUnityPlayer_CheckOrientation_m59 (AndroidUnityPlayer_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
