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

// UnityEngine.GUILayer
struct GUILayer_t167;
// UnityEngine.GUIElement
struct GUIElement_t165;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t165 * GUILayer_HitTest_m465 (GUILayer_t167 * __this, Vector3_t10  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t165 * GUILayer_INTERNAL_CALL_HitTest_m466 (Object_t * __this /* static, unused */, GUILayer_t167 * ___self, Vector3_t10 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
