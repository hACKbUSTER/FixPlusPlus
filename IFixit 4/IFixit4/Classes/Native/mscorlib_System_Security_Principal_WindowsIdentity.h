#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Security_Principal_WindowsAccountType.h"

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t1659  : public Object_t
{
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t382 * ____info_5;
};
struct WindowsIdentity_t1659_StaticFields{
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t ___invalidWindows_6;
};
