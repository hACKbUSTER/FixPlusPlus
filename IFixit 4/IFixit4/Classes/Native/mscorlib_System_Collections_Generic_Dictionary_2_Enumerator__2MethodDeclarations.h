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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1893;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11408_gshared (Enumerator_t1903 * __this, Dictionary_2_t1893 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11408(__this, ___dictionary, method) (( void (*) (Enumerator_t1903 *, Dictionary_2_t1893 *, const MethodInfo*))Enumerator__ctor_m11408_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11409_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11409(__this, method) (( Object_t * (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11409_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m11410_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m11410(__this, method) (( void (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m11410_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1141  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11411_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11411(__this, method) (( DictionaryEntry_t1141  (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11412_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11412(__this, method) (( Object_t * (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11412_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11413_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11413(__this, method) (( Object_t * (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11413_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11414_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11414(__this, method) (( bool (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_MoveNext_m11414_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1896  Enumerator_get_Current_m11415_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11415(__this, method) (( KeyValuePair_2_t1896  (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_get_Current_m11415_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11416_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11416(__this, method) (( Object_t * (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_get_CurrentKey_m11416_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11417_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11417(__this, method) (( int32_t (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_get_CurrentValue_m11417_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m11418_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_Reset_m11418(__this, method) (( void (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_Reset_m11418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11419_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11419(__this, method) (( void (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_VerifyState_m11419_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11420_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11420(__this, method) (( void (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_VerifyCurrent_m11420_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11421_gshared (Enumerator_t1903 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11421(__this, method) (( void (*) (Enumerator_t1903 *, const MethodInfo*))Enumerator_Dispose_m11421_gshared)(__this, method)
