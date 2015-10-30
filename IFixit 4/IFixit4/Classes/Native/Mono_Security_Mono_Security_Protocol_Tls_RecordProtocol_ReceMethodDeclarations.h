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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t892;
// System.AsyncCallback
struct AsyncCallback_t175;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t485;
// System.IO.Stream
struct Stream_t894;
// System.Exception
struct Exception_t79;
// System.Threading.WaitHandle
struct WaitHandle_t946;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4683 (ReceiveRecordAsyncResult_t892 * __this, AsyncCallback_t175 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t485* ___initialBuffer, Stream_t894 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t894 * ReceiveRecordAsyncResult_get_Record_m4684 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t485* ReceiveRecordAsyncResult_get_ResultingBuffer_m4685 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t485* ReceiveRecordAsyncResult_get_InitialBuffer_m4686 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4687 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t79 * ReceiveRecordAsyncResult_get_AsyncException_m4688 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4689 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t946 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4690 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4691 (ReceiveRecordAsyncResult_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4692 (ReceiveRecordAsyncResult_t892 * __this, Exception_t79 * ___ex, ByteU5BU5D_t485* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4693 (ReceiveRecordAsyncResult_t892 * __this, Exception_t79 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4694 (ReceiveRecordAsyncResult_t892 * __this, ByteU5BU5D_t485* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
