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
// Mono.Security.X509.X509Store
struct X509Store_t850;

#include "mscorlib_System_Object.h"

// Mono.Security.X509.X509Stores
struct  X509Stores_t852  : public Object_t
{
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t850 * ____trusted_1;
};
