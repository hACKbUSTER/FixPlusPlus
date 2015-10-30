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
// Mono.Security.ASN1
struct ASN1_t813;

#include "mscorlib_System_Object.h"

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t817  : public Object_t
{
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t813 * ___content_1;
};
