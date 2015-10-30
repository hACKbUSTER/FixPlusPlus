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

// UnityEngine.AnimationCurve
struct AnimationCurve_t236;
struct AnimationCurve_t236_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t372;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m1042 (AnimationCurve_t236 * __this, KeyframeU5BU5D_t372* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m1043 (AnimationCurve_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m1044 (AnimationCurve_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m1045 (AnimationCurve_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m1046 (AnimationCurve_t236 * __this, KeyframeU5BU5D_t372* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t236_marshal(const AnimationCurve_t236& unmarshaled, AnimationCurve_t236_marshaled& marshaled);
extern "C" void AnimationCurve_t236_marshal_back(const AnimationCurve_t236_marshaled& marshaled, AnimationCurve_t236& unmarshaled);
extern "C" void AnimationCurve_t236_marshal_cleanup(AnimationCurve_t236_marshaled& marshaled);
