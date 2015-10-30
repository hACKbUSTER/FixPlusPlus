#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t834;
// System.Byte[]
struct ByteU5BU5D_t485;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// Mono.Security.StrongName
struct  StrongName_t1256  : public Object_t
{
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t834 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t485* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t485* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;
};
struct StrongName_t1256_StaticFields{
	// System.Object Mono.Security.StrongName::lockObject
	Object_t * ___lockObject_4;
	// System.Boolean Mono.Security.StrongName::initialized
	bool ___initialized_5;
};
