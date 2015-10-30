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

// System.Enum
struct Enum_t397;
// System.IFormatProvider
struct IFormatProvider_t1817;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t879;
// System.String[]
struct StringU5BU5D_t323;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_TypeCode.h"

// System.Void System.Enum::.ctor()
extern "C" void Enum__ctor_m6711 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Enum::.cctor()
extern "C" void Enum__cctor_m6712 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Enum_System_IConvertible_ToBoolean_m6713 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Enum::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Enum_System_IConvertible_ToByte_m6714 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Enum::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Enum_System_IConvertible_ToChar_m6715 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Enum::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t266  Enum_System_IConvertible_ToDateTime_m6716 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Enum::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1163  Enum_System_IConvertible_ToDecimal_m6717 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Enum::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Enum_System_IConvertible_ToDouble_m6718 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Enum::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Enum_System_IConvertible_ToInt16_m6719 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Enum_System_IConvertible_ToInt32_m6720 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Enum::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Enum_System_IConvertible_ToInt64_m6721 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Enum::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Enum_System_IConvertible_ToSByte_m6722 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Enum::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Enum_System_IConvertible_ToSingle_m6723 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Enum_System_IConvertible_ToType_m6724 (Object_t * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Enum::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Enum_System_IConvertible_ToUInt16_m6725 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Enum::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Enum_System_IConvertible_ToUInt32_m6726 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Enum_System_IConvertible_ToUInt64_m6727 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Enum::GetTypeCode()
extern "C" int32_t Enum_GetTypeCode_m6728 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_value()
extern "C" Object_t * Enum_get_value_m6729 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_Value()
extern "C" Object_t * Enum_get_Value_m6730 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindPosition(System.Object,System.Array)
extern "C" int32_t Enum_FindPosition_m6731 (Object_t * __this /* static, unused */, Object_t * ___value, Array_t * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::GetName(System.Type,System.Object)
extern "C" String_t* Enum_GetName_m6732 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C" bool Enum_IsDefined_m5119 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::get_underlying_type(System.Type)
extern "C" Type_t * Enum_get_underlying_type_m6733 (Object_t * __this /* static, unused */, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::GetUnderlyingType(System.Type)
extern "C" Type_t * Enum_GetUnderlyingType_m6734 (Object_t * __this /* static, unused */, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindName(System.Collections.Hashtable,System.String[],System.String,System.Boolean)
extern "C" int32_t Enum_FindName_m6735 (Object_t * __this /* static, unused */, Hashtable_t879 * ___name_hash, StringU5BU5D_t323* ___names, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::GetValue(System.Object,System.TypeCode)
extern "C" uint64_t Enum_GetValue_m6736 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___typeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
extern "C" Object_t * Enum_Parse_m1667 (Object_t * __this /* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::compare_value_to(System.Object)
extern "C" int32_t Enum_compare_value_to_m6737 (Object_t * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::CompareTo(System.Object)
extern "C" int32_t Enum_CompareTo_m6738 (Object_t * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString()
extern "C" String_t* Enum_ToString_m6739 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.IFormatProvider)
extern "C" String_t* Enum_ToString_m6740 (Object_t * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String)
extern "C" String_t* Enum_ToString_m6741 (Object_t * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Enum_ToString_m6742 (Object_t * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Byte)
extern "C" Object_t * Enum_ToObject_m6743 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int16)
extern "C" Object_t * Enum_ToObject_m6744 (Object_t * __this /* static, unused */, Type_t * ___enumType, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int32)
extern "C" Object_t * Enum_ToObject_m6745 (Object_t * __this /* static, unused */, Type_t * ___enumType, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int64)
extern "C" Object_t * Enum_ToObject_m6746 (Object_t * __this /* static, unused */, Type_t * ___enumType, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Object)
extern "C" Object_t * Enum_ToObject_m6747 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.SByte)
extern "C" Object_t * Enum_ToObject_m6748 (Object_t * __this /* static, unused */, Type_t * ___enumType, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt16)
extern "C" Object_t * Enum_ToObject_m6749 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt32)
extern "C" Object_t * Enum_ToObject_m6750 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt64)
extern "C" Object_t * Enum_ToObject_m6751 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::Equals(System.Object)
extern "C" bool Enum_Equals_m6752 (Object_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::get_hashcode()
extern "C" int32_t Enum_get_hashcode_m6753 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::GetHashCode()
extern "C" int32_t Enum_GetHashCode_m6754 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatSpecifier_X(System.Type,System.Object,System.Boolean)
extern "C" String_t* Enum_FormatSpecifier_X_m6755 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, bool ___upper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatFlags(System.Type,System.Object)
extern "C" String_t* Enum_FormatFlags_m6756 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::Format(System.Type,System.Object,System.String)
extern "C" String_t* Enum_Format_m6757 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
