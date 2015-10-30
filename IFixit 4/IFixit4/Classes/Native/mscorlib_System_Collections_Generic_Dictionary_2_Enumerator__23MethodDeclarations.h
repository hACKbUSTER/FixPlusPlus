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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t748;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15665_gshared (Enumerator_t2178 * __this, Dictionary_2_t748 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15665(__this, ___dictionary, method) (( void (*) (Enumerator_t2178 *, Dictionary_2_t748 *, const MethodInfo*))Enumerator__ctor_m15665_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15666_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15666(__this, method) (( Object_t * (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15667_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15667(__this, method) (( void (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15667_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1141  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15668_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15668(__this, method) (( DictionaryEntry_t1141  (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15669_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15669(__this, method) (( Object_t * (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15670_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15670(__this, method) (( Object_t * (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15670_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15671_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15671(__this, method) (( bool (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_MoveNext_m15671_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t2174  Enumerator_get_Current_m15672_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15672(__this, method) (( KeyValuePair_2_t2174  (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_get_Current_m15672_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15673_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15673(__this, method) (( int32_t (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_get_CurrentKey_m15673_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t509  Enumerator_get_CurrentValue_m15674_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15674(__this, method) (( TrackableResultData_t509  (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_get_CurrentValue_m15674_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Reset()
extern "C" void Enumerator_Reset_m15675_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15675(__this, method) (( void (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_Reset_m15675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m15676_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15676(__this, method) (( void (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_VerifyState_m15676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15677_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15677(__this, method) (( void (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_VerifyCurrent_m15677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m15678_gshared (Enumerator_t2178 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15678(__this, method) (( void (*) (Enumerator_t2178 *, const MethodInfo*))Enumerator_Dispose_m15678_gshared)(__this, method)
