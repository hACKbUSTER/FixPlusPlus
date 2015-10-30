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

// System.Byte[]
struct ByteU5BU5D_t485;
// System.Security.Cryptography.RSA
struct RSA_t834;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t779;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t825;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m7248 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m7249 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___array1, ByteU5BU5D_t485* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t485* PKCS1_I2OSP_m7250 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t485* PKCS1_OS2IP_m7251 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t485* PKCS1_RSAEP_m7252 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, ByteU5BU5D_t485* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t485* PKCS1_RSASP1_m7253 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, ByteU5BU5D_t485* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t485* PKCS1_RSAVP1_m7254 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, ByteU5BU5D_t485* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t485* PKCS1_Encrypt_v15_m7255 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, RandomNumberGenerator_t779 * ___rng, ByteU5BU5D_t485* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t485* PKCS1_Sign_v15_m7256 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, HashAlgorithm_t825 * ___hash, ByteU5BU5D_t485* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m7257 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, HashAlgorithm_t825 * ___hash, ByteU5BU5D_t485* ___hashValue, ByteU5BU5D_t485* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m7258 (Object_t * __this /* static, unused */, RSA_t834 * ___rsa, HashAlgorithm_t825 * ___hash, ByteU5BU5D_t485* ___hashValue, ByteU5BU5D_t485* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t485* PKCS1_Encode_v15_m7259 (Object_t * __this /* static, unused */, HashAlgorithm_t825 * ___hash, ByteU5BU5D_t485* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
