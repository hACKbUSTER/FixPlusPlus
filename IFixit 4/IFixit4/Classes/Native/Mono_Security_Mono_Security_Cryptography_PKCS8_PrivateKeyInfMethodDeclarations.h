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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t828;
// System.Byte[]
struct ByteU5BU5D_t485;
// System.Security.Cryptography.RSA
struct RSA_t834;
// System.Security.Cryptography.DSA
struct DSA_t841;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m4282 (PrivateKeyInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m4283 (PrivateKeyInfo_t828 * __this, ByteU5BU5D_t485* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t485* PrivateKeyInfo_get_PrivateKey_m4284 (PrivateKeyInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m4285 (PrivateKeyInfo_t828 * __this, ByteU5BU5D_t485* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t485* PrivateKeyInfo_RemoveLeadingZero_m4286 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t485* PrivateKeyInfo_Normalize_m4287 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t834 * PrivateKeyInfo_DecodeRSA_m4288 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t841 * PrivateKeyInfo_DecodeDSA_m4289 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___privateKey, DSAParameters_t944  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
