#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t343;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t346  : public Object_t
{
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t343 * ___m_Arguments_0;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_1;
};
