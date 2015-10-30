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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1034;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t840;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1035;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932;
// System.Security.Cryptography.Oid
struct Oid_t1036;
// System.Byte[]
struct ByteU5BU5D_t485;
// System.Security.Cryptography.DSA
struct DSA_t841;
// System.Security.Cryptography.RSA
struct RSA_t834;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5350 (PublicKey_t1034 * __this, X509Certificate_t840 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1035 * PublicKey_get_EncodedKeyValue_m5351 (PublicKey_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1035 * PublicKey_get_EncodedParameters_m5352 (PublicKey_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t932 * PublicKey_get_Key_m5353 (PublicKey_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1036 * PublicKey_get_Oid_m5354 (PublicKey_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t485* PublicKey_GetUnsignedBigInteger_m5355 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t841 * PublicKey_DecodeDSA_m5356 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___rawPublicKey, ByteU5BU5D_t485* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t834 * PublicKey_DecodeRSA_m5357 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
