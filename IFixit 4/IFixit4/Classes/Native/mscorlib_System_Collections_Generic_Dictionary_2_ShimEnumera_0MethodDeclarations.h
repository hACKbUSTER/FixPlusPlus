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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1980;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t316;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12216_gshared (ShimEnumerator_t1980 * __this, Dictionary_2_t316 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12216(__this, ___host, method) (( void (*) (ShimEnumerator_t1980 *, Dictionary_2_t316 *, const MethodInfo*))ShimEnumerator__ctor_m12216_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12217_gshared (ShimEnumerator_t1980 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12217(__this, method) (( bool (*) (ShimEnumerator_t1980 *, const MethodInfo*))ShimEnumerator_MoveNext_m12217_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1141  ShimEnumerator_get_Entry_m12218_gshared (ShimEnumerator_t1980 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12218(__this, method) (( DictionaryEntry_t1141  (*) (ShimEnumerator_t1980 *, const MethodInfo*))ShimEnumerator_get_Entry_m12218_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12219_gshared (ShimEnumerator_t1980 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12219(__this, method) (( Object_t * (*) (ShimEnumerator_t1980 *, const MethodInfo*))ShimEnumerator_get_Key_m12219_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12220_gshared (ShimEnumerator_t1980 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12220(__this, method) (( Object_t * (*) (ShimEnumerator_t1980 *, const MethodInfo*))ShimEnumerator_get_Value_m12220_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12221_gshared (ShimEnumerator_t1980 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12221(__this, method) (( Object_t * (*) (ShimEnumerator_t1980 *, const MethodInfo*))ShimEnumerator_get_Current_m12221_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12222_gshared (ShimEnumerator_t1980 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12222(__this, method) (( void (*) (ShimEnumerator_t1980 *, const MethodInfo*))ShimEnumerator_Reset_m12222_gshared)(__this, method)
