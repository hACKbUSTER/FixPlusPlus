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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t2206;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15965_gshared (DefaultComparer_t2206 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15965(__this, method) (( void (*) (DefaultComparer_t2206 *, const MethodInfo*))DefaultComparer__ctor_m15965_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15966_gshared (DefaultComparer_t2206 * __this, TargetSearchResult_t588  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15966(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2206 *, TargetSearchResult_t588 , const MethodInfo*))DefaultComparer_GetHashCode_m15966_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15967_gshared (DefaultComparer_t2206 * __this, TargetSearchResult_t588  ___x, TargetSearchResult_t588  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15967(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2206 *, TargetSearchResult_t588 , TargetSearchResult_t588 , const MethodInfo*))DefaultComparer_Equals_m15967_gshared)(__this, ___x, ___y, method)
