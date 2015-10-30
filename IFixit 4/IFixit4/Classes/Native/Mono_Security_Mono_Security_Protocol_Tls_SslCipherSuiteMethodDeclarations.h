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

// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t908;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t485;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void SslCipherSuite__ctor_m4788 (SslCipherSuite_t908 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t485* SslCipherSuite_ComputeServerRecordMAC_m4789 (SslCipherSuite_t908 * __this, uint8_t ___contentType, ByteU5BU5D_t485* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t485* SslCipherSuite_ComputeClientRecordMAC_m4790 (SslCipherSuite_t908 * __this, uint8_t ___contentType, ByteU5BU5D_t485* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeMasterSecret(System.Byte[])
extern "C" void SslCipherSuite_ComputeMasterSecret_m4791 (SslCipherSuite_t908 * __this, ByteU5BU5D_t485* ___preMasterSecret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeKeys()
extern "C" void SslCipherSuite_ComputeKeys_m4792 (SslCipherSuite_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::prf(System.Byte[],System.String,System.Byte[])
extern "C" ByteU5BU5D_t485* SslCipherSuite_prf_m4793 (SslCipherSuite_t908 * __this, ByteU5BU5D_t485* ___secret, String_t* ___label, ByteU5BU5D_t485* ___random, const MethodInfo* method) IL2CPP_METHOD_ATTR;
