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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1783;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1820;
// System.String[]
struct StringU5BU5D_t323;
// System.Globalization.DaylightTime
struct DaylightTime_t1306;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m11130 (CurrentSystemTimeZone_t1783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m11131 (CurrentSystemTimeZone_t1783 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11132 (CurrentSystemTimeZone_t1783 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m11133 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1820** ___data, StringU5BU5D_t323** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1306 * CurrentSystemTimeZone_GetDaylightChanges_m11134 (CurrentSystemTimeZone_t1783 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t686  CurrentSystemTimeZone_GetUtcOffset_m11135 (CurrentSystemTimeZone_t1783 * __this, DateTime_t266  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m11136 (CurrentSystemTimeZone_t1783 * __this, DaylightTime_t1306 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1306 * CurrentSystemTimeZone_GetDaylightTimeFromData_m11137 (CurrentSystemTimeZone_t1783 * __this, Int64U5BU5D_t1820* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
