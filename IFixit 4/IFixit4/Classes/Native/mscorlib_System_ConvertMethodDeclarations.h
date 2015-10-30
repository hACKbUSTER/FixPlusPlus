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
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1817;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Convert::.cctor()
extern "C" void Convert__cctor_m10438 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::InternalFromBase64String(System.String,System.Boolean)
extern "C" ByteU5BU5D_t485* Convert_InternalFromBase64String_m10439 (Object_t * __this /* static, unused */, String_t* ___str, bool ___allowWhitespaceOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" ByteU5BU5D_t485* Convert_FromBase64String_m5071 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" String_t* Convert_ToBase64String_m5046 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___inArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Convert_ToBase64String_m10440 (Object_t * __this /* static, unused */, ByteU5BU5D_t485* ___inArray, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Byte)
extern "C" bool Convert_ToBoolean_m10441 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Decimal)
extern "C" bool Convert_ToBoolean_m10442 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Double)
extern "C" bool Convert_ToBoolean_m10443 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Single)
extern "C" bool Convert_ToBoolean_m10444 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int32)
extern "C" bool Convert_ToBoolean_m10445 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int64)
extern "C" bool Convert_ToBoolean_m10446 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.SByte)
extern "C" bool Convert_ToBoolean_m10447 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int16)
extern "C" bool Convert_ToBoolean_m10448 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.String,System.IFormatProvider)
extern "C" bool Convert_ToBoolean_m10449 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C" bool Convert_ToBoolean_m10450 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C" bool Convert_ToBoolean_m10451 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C" bool Convert_ToBoolean_m10452 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
extern "C" bool Convert_ToBoolean_m10453 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
extern "C" bool Convert_ToBoolean_m10454 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Boolean)
extern "C" uint8_t Convert_ToByte_m10455 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Char)
extern "C" uint8_t Convert_ToByte_m10456 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Decimal)
extern "C" uint8_t Convert_ToByte_m10457 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Double)
extern "C" uint8_t Convert_ToByte_m10458 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Single)
extern "C" uint8_t Convert_ToByte_m10459 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
extern "C" uint8_t Convert_ToByte_m10460 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int64)
extern "C" uint8_t Convert_ToByte_m10461 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.SByte)
extern "C" uint8_t Convert_ToByte_m10462 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int16)
extern "C" uint8_t Convert_ToByte_m10463 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String)
extern "C" uint8_t Convert_ToByte_m10464 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String,System.IFormatProvider)
extern "C" uint8_t Convert_ToByte_m10465 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C" uint8_t Convert_ToByte_m10466 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C" uint8_t Convert_ToByte_m10467 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C" uint8_t Convert_ToByte_m10468 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Object,System.IFormatProvider)
extern "C" uint8_t Convert_ToByte_m10469 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Byte)
extern "C" uint16_t Convert_ToChar_m5076 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C" uint16_t Convert_ToChar_m10470 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int64)
extern "C" uint16_t Convert_ToChar_m10471 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Single)
extern "C" uint16_t Convert_ToChar_m10472 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.SByte)
extern "C" uint16_t Convert_ToChar_m10473 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int16)
extern "C" uint16_t Convert_ToChar_m10474 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String,System.IFormatProvider)
extern "C" uint16_t Convert_ToChar_m10475 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
extern "C" uint16_t Convert_ToChar_m10476 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
extern "C" uint16_t Convert_ToChar_m10477 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
extern "C" uint16_t Convert_ToChar_m10478 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
extern "C" uint16_t Convert_ToChar_m10479 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C" DateTime_t266  Convert_ToDateTime_m10480 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int16)
extern "C" DateTime_t266  Convert_ToDateTime_m10481 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int32)
extern "C" DateTime_t266  Convert_ToDateTime_m10482 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int64)
extern "C" DateTime_t266  Convert_ToDateTime_m10483 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Single)
extern "C" DateTime_t266  Convert_ToDateTime_m10484 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
extern "C" DateTime_t266  Convert_ToDateTime_m10485 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.SByte)
extern "C" DateTime_t266  Convert_ToDateTime_m10486 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
extern "C" DateTime_t266  Convert_ToDateTime_m10487 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
extern "C" DateTime_t266  Convert_ToDateTime_m10488 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
extern "C" DateTime_t266  Convert_ToDateTime_m10489 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Boolean)
extern "C" Decimal_t1163  Convert_ToDecimal_m10490 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Byte)
extern "C" Decimal_t1163  Convert_ToDecimal_m10491 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C" Decimal_t1163  Convert_ToDecimal_m10492 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C" Decimal_t1163  Convert_ToDecimal_m10493 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int32)
extern "C" Decimal_t1163  Convert_ToDecimal_m10494 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int64)
extern "C" Decimal_t1163  Convert_ToDecimal_m10495 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.SByte)
extern "C" Decimal_t1163  Convert_ToDecimal_m10496 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int16)
extern "C" Decimal_t1163  Convert_ToDecimal_m10497 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String,System.IFormatProvider)
extern "C" Decimal_t1163  Convert_ToDecimal_m10498 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C" Decimal_t1163  Convert_ToDecimal_m10499 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C" Decimal_t1163  Convert_ToDecimal_m10500 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C" Decimal_t1163  Convert_ToDecimal_m10501 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C" Decimal_t1163  Convert_ToDecimal_m10502 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
extern "C" double Convert_ToDouble_m10503 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Byte)
extern "C" double Convert_ToDouble_m10504 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Decimal)
extern "C" double Convert_ToDouble_m10505 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Double)
extern "C" double Convert_ToDouble_m10506 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Single)
extern "C" double Convert_ToDouble_m10507 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
extern "C" double Convert_ToDouble_m10508 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int64)
extern "C" double Convert_ToDouble_m10509 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.SByte)
extern "C" double Convert_ToDouble_m10510 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int16)
extern "C" double Convert_ToDouble_m10511 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
extern "C" double Convert_ToDouble_m10512 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C" double Convert_ToDouble_m10513 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C" double Convert_ToDouble_m10514 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C" double Convert_ToDouble_m10515 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" double Convert_ToDouble_m10516 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Boolean)
extern "C" int16_t Convert_ToInt16_m10517 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Byte)
extern "C" int16_t Convert_ToInt16_m10518 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Char)
extern "C" int16_t Convert_ToInt16_m10519 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Decimal)
extern "C" int16_t Convert_ToInt16_m10520 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Double)
extern "C" int16_t Convert_ToInt16_m10521 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Single)
extern "C" int16_t Convert_ToInt16_m10522 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C" int16_t Convert_ToInt16_m10523 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int64)
extern "C" int16_t Convert_ToInt16_m10524 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.SByte)
extern "C" int16_t Convert_ToInt16_m10525 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int16)
extern "C" int16_t Convert_ToInt16_m10526 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.String,System.IFormatProvider)
extern "C" int16_t Convert_ToInt16_m5030 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C" int16_t Convert_ToInt16_m10527 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C" int16_t Convert_ToInt16_m10528 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C" int16_t Convert_ToInt16_m10529 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object)
extern "C" int16_t Convert_ToInt16_m10530 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
extern "C" int16_t Convert_ToInt16_m10531 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Boolean)
extern "C" int32_t Convert_ToInt32_m10532 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C" int32_t Convert_ToInt32_m10533 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" int32_t Convert_ToInt32_m10534 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Decimal)
extern "C" int32_t Convert_ToInt32_m10535 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Double)
extern "C" int32_t Convert_ToInt32_m10536 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
extern "C" int32_t Convert_ToInt32_m10537 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int64)
extern "C" int32_t Convert_ToInt32_m10538 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C" int32_t Convert_ToInt32_m10539 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C" int32_t Convert_ToInt32_m10540 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
extern "C" int32_t Convert_ToInt32_m10541 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C" int32_t Convert_ToInt32_m10542 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C" int32_t Convert_ToInt32_m10543 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C" int32_t Convert_ToInt32_m10544 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
extern "C" int32_t Convert_ToInt32_m10545 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C" int32_t Convert_ToInt32_m5084 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Boolean)
extern "C" int64_t Convert_ToInt64_m10546 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Byte)
extern "C" int64_t Convert_ToInt64_m10547 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Char)
extern "C" int64_t Convert_ToInt64_m10548 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Decimal)
extern "C" int64_t Convert_ToInt64_m10549 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Double)
extern "C" int64_t Convert_ToInt64_m10550 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Single)
extern "C" int64_t Convert_ToInt64_m10551 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int32)
extern "C" int64_t Convert_ToInt64_m10552 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int64)
extern "C" int64_t Convert_ToInt64_m10553 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.SByte)
extern "C" int64_t Convert_ToInt64_m10554 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int16)
extern "C" int64_t Convert_ToInt64_m10555 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String)
extern "C" int64_t Convert_ToInt64_m10556 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
extern "C" int64_t Convert_ToInt64_m10557 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C" int64_t Convert_ToInt64_m10558 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C" int64_t Convert_ToInt64_m10559 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C" int64_t Convert_ToInt64_m10560 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object)
extern "C" int64_t Convert_ToInt64_m10561 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
extern "C" int64_t Convert_ToInt64_m10562 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Boolean)
extern "C" int8_t Convert_ToSByte_m10563 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Byte)
extern "C" int8_t Convert_ToSByte_m10564 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Char)
extern "C" int8_t Convert_ToSByte_m10565 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Decimal)
extern "C" int8_t Convert_ToSByte_m10566 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Double)
extern "C" int8_t Convert_ToSByte_m10567 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Single)
extern "C" int8_t Convert_ToSByte_m10568 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C" int8_t Convert_ToSByte_m10569 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int64)
extern "C" int8_t Convert_ToSByte_m10570 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int16)
extern "C" int8_t Convert_ToSByte_m10571 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.String,System.IFormatProvider)
extern "C" int8_t Convert_ToSByte_m10572 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C" int8_t Convert_ToSByte_m10573 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C" int8_t Convert_ToSByte_m10574 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C" int8_t Convert_ToSByte_m10575 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
extern "C" int8_t Convert_ToSByte_m10576 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Boolean)
extern "C" float Convert_ToSingle_m10577 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Byte)
extern "C" float Convert_ToSingle_m10578 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Decimal)
extern "C" float Convert_ToSingle_m10579 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Double)
extern "C" float Convert_ToSingle_m10580 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
extern "C" float Convert_ToSingle_m10581 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
extern "C" float Convert_ToSingle_m10582 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int64)
extern "C" float Convert_ToSingle_m10583 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.SByte)
extern "C" float Convert_ToSingle_m10584 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int16)
extern "C" float Convert_ToSingle_m10585 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
extern "C" float Convert_ToSingle_m10586 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C" float Convert_ToSingle_m10587 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C" float Convert_ToSingle_m10588 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C" float Convert_ToSingle_m10589 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
extern "C" float Convert_ToSingle_m10590 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
extern "C" String_t* Convert_ToString_m10591 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m10592 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Boolean)
extern "C" uint16_t Convert_ToUInt16_m10593 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Byte)
extern "C" uint16_t Convert_ToUInt16_m10594 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Char)
extern "C" uint16_t Convert_ToUInt16_m10595 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Decimal)
extern "C" uint16_t Convert_ToUInt16_m10596 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Double)
extern "C" uint16_t Convert_ToUInt16_m10597 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Single)
extern "C" uint16_t Convert_ToUInt16_m10598 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C" uint16_t Convert_ToUInt16_m10599 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int64)
extern "C" uint16_t Convert_ToUInt16_m10600 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.SByte)
extern "C" uint16_t Convert_ToUInt16_m10601 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int16)
extern "C" uint16_t Convert_ToUInt16_m10602 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.String,System.IFormatProvider)
extern "C" uint16_t Convert_ToUInt16_m10603 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C" uint16_t Convert_ToUInt16_m10604 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C" uint16_t Convert_ToUInt16_m10605 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object,System.IFormatProvider)
extern "C" uint16_t Convert_ToUInt16_m10606 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
extern "C" uint32_t Convert_ToUInt32_m10607 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Byte)
extern "C" uint32_t Convert_ToUInt32_m10608 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Char)
extern "C" uint32_t Convert_ToUInt32_m10609 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
extern "C" uint32_t Convert_ToUInt32_m10610 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Double)
extern "C" uint32_t Convert_ToUInt32_m10611 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Single)
extern "C" uint32_t Convert_ToUInt32_m10612 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C" uint32_t Convert_ToUInt32_m10613 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C" uint32_t Convert_ToUInt32_m10614 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.SByte)
extern "C" uint32_t Convert_ToUInt32_m10615 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int16)
extern "C" uint32_t Convert_ToUInt32_m10616 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.String,System.IFormatProvider)
extern "C" uint32_t Convert_ToUInt32_m10617 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C" uint32_t Convert_ToUInt32_m10618 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C" uint32_t Convert_ToUInt32_m10619 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object)
extern "C" uint32_t Convert_ToUInt32_m10620 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
extern "C" uint32_t Convert_ToUInt32_m10621 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Boolean)
extern "C" uint64_t Convert_ToUInt64_m10622 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Byte)
extern "C" uint64_t Convert_ToUInt64_m10623 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Char)
extern "C" uint64_t Convert_ToUInt64_m10624 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
extern "C" uint64_t Convert_ToUInt64_m10625 (Object_t * __this /* static, unused */, Decimal_t1163  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Double)
extern "C" uint64_t Convert_ToUInt64_m10626 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Single)
extern "C" uint64_t Convert_ToUInt64_m10627 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C" uint64_t Convert_ToUInt64_m10628 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int64)
extern "C" uint64_t Convert_ToUInt64_m10629 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.SByte)
extern "C" uint64_t Convert_ToUInt64_m10630 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int16)
extern "C" uint64_t Convert_ToUInt64_m10631 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.String,System.IFormatProvider)
extern "C" uint64_t Convert_ToUInt64_m10632 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" uint64_t Convert_ToUInt64_m10633 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C" uint64_t Convert_ToUInt64_m10634 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C" uint64_t Convert_ToUInt64_m10635 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
extern "C" uint64_t Convert_ToUInt64_m10636 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
extern "C" Object_t * Convert_ChangeType_m10637 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___conversionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
extern "C" Object_t * Convert_ToType_m10638 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___conversionType, Object_t * ___provider, bool ___try_target_to_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
