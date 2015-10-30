#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t1022;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_PlatformID.h"

// System.OperatingSystem
struct  OperatingSystem_t1747  : public Object_t
{
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t1022 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;
};
