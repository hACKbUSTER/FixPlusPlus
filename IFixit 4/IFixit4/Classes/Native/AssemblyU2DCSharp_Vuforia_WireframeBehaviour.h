#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t70;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t69  : public MonoBehaviour_t2
{
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t70 * ___mLineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t71  ___LineColor_4;
};
