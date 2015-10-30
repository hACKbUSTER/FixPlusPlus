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

// UnityEngine.Advertisements.UnityAdsInternal
struct UnityAdsInternal_t211;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t212;
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
struct UnityAdsDelegate_2_t213;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Advertisements.UnityAdsInternal::.ctor()
extern "C" void UnityAdsInternal__ctor_m946 (UnityAdsInternal_t211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onCampaignsAvailable_m947 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onCampaignsAvailable_m948 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onCampaignsFetchFailed_m949 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onCampaignsFetchFailed_m950 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onShow_m951 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onShow_m952 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onHide_m953 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onHide_m954 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern "C" void UnityAdsInternal_add_onVideoCompleted_m955 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern "C" void UnityAdsInternal_remove_onVideoCompleted_m956 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onVideoStarted_m957 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onVideoStarted_m958 (Object_t * __this /* static, unused */, UnityAdsDelegate_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()
extern "C" void UnityAdsInternal_RegisterNative_m959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)
extern "C" void UnityAdsInternal_Init_m960 (Object_t * __this /* static, unused */, String_t* ___gameId, bool ___testModeEnabled, bool ___debugModeEnabled, String_t* ___unityVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)
extern "C" bool UnityAdsInternal_Show_m961 (Object_t * __this /* static, unused */, String_t* ___zoneId, String_t* ___rewardItemKey, String_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)
extern "C" bool UnityAdsInternal_CanShowAds_m962 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)
extern "C" void UnityAdsInternal_SetLogLevel_m963 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)
extern "C" void UnityAdsInternal_SetCampaignDataURL_m964 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RemoveAllEventHandlers()
extern "C" void UnityAdsInternal_RemoveAllEventHandlers_m965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsAvailable()
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsAvailable_m966 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsFetchFailed()
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsFetchFailed_m967 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsShow()
extern "C" void UnityAdsInternal_CallUnityAdsShow_m968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsHide()
extern "C" void UnityAdsInternal_CallUnityAdsHide_m969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoCompleted(System.String,System.Boolean)
extern "C" void UnityAdsInternal_CallUnityAdsVideoCompleted_m970 (Object_t * __this /* static, unused */, String_t* ___rewardItemKey, bool ___skipped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoStarted()
extern "C" void UnityAdsInternal_CallUnityAdsVideoStarted_m971 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
