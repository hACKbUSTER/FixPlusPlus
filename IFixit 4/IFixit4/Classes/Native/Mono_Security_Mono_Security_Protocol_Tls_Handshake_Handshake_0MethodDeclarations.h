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

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t896;
// Mono.Security.Protocol.Tls.Context
struct Context_t870;
// System.Byte[]
struct ByteU5BU5D_t485;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void HandshakeMessage__ctor_m4924 (HandshakeMessage_t896 * __this, Context_t870 * ___context, uint8_t ___handshakeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C" void HandshakeMessage__ctor_m4925 (HandshakeMessage_t896 * __this, Context_t870 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" void HandshakeMessage__ctor_m4926 (HandshakeMessage_t896 * __this, Context_t870 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t485* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C" Context_t870 * HandshakeMessage_get_Context_m4927 (HandshakeMessage_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C" uint8_t HandshakeMessage_get_HandshakeType_m4928 (HandshakeMessage_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C" uint8_t HandshakeMessage_get_ContentType_m4929 (HandshakeMessage_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern "C" void HandshakeMessage_Process_m4930 (HandshakeMessage_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C" void HandshakeMessage_Update_m4931 (HandshakeMessage_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern "C" ByteU5BU5D_t485* HandshakeMessage_EncodeMessage_m4932 (HandshakeMessage_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C" bool HandshakeMessage_Compare_m4933 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___buffer1, ByteU5BU5D_t485* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
