#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.GUI/ScrollViewState
struct  ScrollViewState_t264  : public Object_t
{
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::position
	Rect_t82  ___position_0;
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::visibleRect
	Rect_t82  ___visibleRect_1;
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::viewRect
	Rect_t82  ___viewRect_2;
	// UnityEngine.Vector2 UnityEngine.GUI/ScrollViewState::scrollPosition
	Vector2_t131  ___scrollPosition_3;
	// System.Boolean UnityEngine.GUI/ScrollViewState::apply
	bool ___apply_4;
	// System.Boolean UnityEngine.GUI/ScrollViewState::hasScrollTo
	bool ___hasScrollTo_5;
};
