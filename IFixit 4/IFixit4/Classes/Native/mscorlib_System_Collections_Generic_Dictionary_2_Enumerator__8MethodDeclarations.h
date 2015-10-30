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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2017;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12781_gshared (Enumerator_t2024 * __this, Dictionary_2_t2017 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12781(__this, ___dictionary, method) (( void (*) (Enumerator_t2024 *, Dictionary_2_t2017 *, const MethodInfo*))Enumerator__ctor_m12781_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12782_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12782(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12782_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12783_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12783(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12783_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1141  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12784_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12784(__this, method) (( DictionaryEntry_t1141  (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12785_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12785(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12786_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12786(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12787_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12787(__this, method) (( bool (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_MoveNext_m12787_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2019  Enumerator_get_Current_m12788_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12788(__this, method) (( KeyValuePair_2_t2019  (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_get_Current_m12788_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12789_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12789(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_get_CurrentKey_m12789_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12790_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12790(__this, method) (( int32_t (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_get_CurrentValue_m12790_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m12791_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12791(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_Reset_m12791_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m12792_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12792(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_VerifyState_m12792_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12793_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12793(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_VerifyCurrent_m12793_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m12794_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12794(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_Dispose_m12794_gshared)(__this, method)
