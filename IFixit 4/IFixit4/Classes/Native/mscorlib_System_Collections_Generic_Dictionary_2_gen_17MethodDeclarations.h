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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1968;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>[]
struct KeyValuePair_2U5BU5D_t2453;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct IEnumerator_1_t2454;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct KeyCollection_t2176;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct ValueCollection_t2180;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor()
extern "C" void Dictionary_2__ctor_m3970_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3970(__this, method) (( void (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2__ctor_m3970_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15590_gshared (Dictionary_2_t748 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15590(__this, ___comparer, method) (( void (*) (Dictionary_2_t748 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15590_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15591_gshared (Dictionary_2_t748 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15591(__this, ___capacity, method) (( void (*) (Dictionary_2_t748 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15591_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15592_gshared (Dictionary_2_t748 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15592(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t748 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m15592_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15593_gshared (Dictionary_2_t748 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15593(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t748 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15593_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15594_gshared (Dictionary_2_t748 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15594(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t748 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15594_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15595_gshared (Dictionary_2_t748 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15595(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t748 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15595_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15596_gshared (Dictionary_2_t748 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15596(__this, ___key, method) (( bool (*) (Dictionary_2_t748 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15596_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15597_gshared (Dictionary_2_t748 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15597(__this, ___key, method) (( void (*) (Dictionary_2_t748 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15597_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15598_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15598(__this, method) (( Object_t * (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15599_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15599(__this, method) (( bool (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15599_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15600_gshared (Dictionary_2_t748 * __this, KeyValuePair_2_t2174  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15600(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t748 *, KeyValuePair_2_t2174 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15600_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15601_gshared (Dictionary_2_t748 * __this, KeyValuePair_2_t2174  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15601(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t748 *, KeyValuePair_2_t2174 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15601_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15602_gshared (Dictionary_2_t748 * __this, KeyValuePair_2U5BU5D_t2453* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15602(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t748 *, KeyValuePair_2U5BU5D_t2453*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15602_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15603_gshared (Dictionary_2_t748 * __this, KeyValuePair_2_t2174  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15603(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t748 *, KeyValuePair_2_t2174 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15603_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15604_gshared (Dictionary_2_t748 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15604(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t748 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15604_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15605_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15605(__this, method) (( Object_t * (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15605_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15606_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15606(__this, method) (( Object_t* (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15606_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15607_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15607(__this, method) (( Object_t * (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15608_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15608(__this, method) (( int32_t (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_get_Count_m15608_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Item(TKey)
extern "C" TrackableResultData_t509  Dictionary_2_get_Item_m15609_gshared (Dictionary_2_t748 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15609(__this, ___key, method) (( TrackableResultData_t509  (*) (Dictionary_2_t748 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15609_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15610_gshared (Dictionary_2_t748 * __this, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15610(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t748 *, int32_t, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_set_Item_m15610_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15611_gshared (Dictionary_2_t748 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15611(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t748 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15611_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15612_gshared (Dictionary_2_t748 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15612(__this, ___size, method) (( void (*) (Dictionary_2_t748 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15612_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15613_gshared (Dictionary_2_t748 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15613(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t748 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15613_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2174  Dictionary_2_make_pair_m15614_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15614(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2174  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_make_pair_m15614_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m15615_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15615(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_pick_key_m15615_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_value(TKey,TValue)
extern "C" TrackableResultData_t509  Dictionary_2_pick_value_m15616_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15616(__this /* static, unused */, ___key, ___value, method) (( TrackableResultData_t509  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_pick_value_m15616_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15617_gshared (Dictionary_2_t748 * __this, KeyValuePair_2U5BU5D_t2453* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15617(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t748 *, KeyValuePair_2U5BU5D_t2453*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15617_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Resize()
extern "C" void Dictionary_2_Resize_m15618_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15618(__this, method) (( void (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_Resize_m15618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15619_gshared (Dictionary_2_t748 * __this, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15619(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t748 *, int32_t, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_Add_m15619_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Clear()
extern "C" void Dictionary_2_Clear_m15620_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15620(__this, method) (( void (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_Clear_m15620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15621_gshared (Dictionary_2_t748 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15621(__this, ___key, method) (( bool (*) (Dictionary_2_t748 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15621_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15622_gshared (Dictionary_2_t748 * __this, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15622(__this, ___value, method) (( bool (*) (Dictionary_2_t748 *, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_ContainsValue_m15622_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15623_gshared (Dictionary_2_t748 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15623(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t748 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m15623_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15624_gshared (Dictionary_2_t748 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15624(__this, ___sender, method) (( void (*) (Dictionary_2_t748 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15624_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15625_gshared (Dictionary_2_t748 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15625(__this, ___key, method) (( bool (*) (Dictionary_2_t748 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15625_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15626_gshared (Dictionary_2_t748 * __this, int32_t ___key, TrackableResultData_t509 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15626(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t748 *, int32_t, TrackableResultData_t509 *, const MethodInfo*))Dictionary_2_TryGetValue_m15626_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Keys()
extern "C" KeyCollection_t2176 * Dictionary_2_get_Keys_m15627_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15627(__this, method) (( KeyCollection_t2176 * (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_get_Keys_m15627_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Values()
extern "C" ValueCollection_t2180 * Dictionary_2_get_Values_m15628_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15628(__this, method) (( ValueCollection_t2180 * (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_get_Values_m15628_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m15629_gshared (Dictionary_2_t748 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15629(__this, ___key, method) (( int32_t (*) (Dictionary_2_t748 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15629_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTValue(System.Object)
extern "C" TrackableResultData_t509  Dictionary_2_ToTValue_m15630_gshared (Dictionary_2_t748 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15630(__this, ___value, method) (( TrackableResultData_t509  (*) (Dictionary_2_t748 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15630_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15631_gshared (Dictionary_2_t748 * __this, KeyValuePair_2_t2174  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15631(__this, ___pair, method) (( bool (*) (Dictionary_2_t748 *, KeyValuePair_2_t2174 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15631_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetEnumerator()
extern "C" Enumerator_t2178  Dictionary_2_GetEnumerator_m15632_gshared (Dictionary_2_t748 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15632(__this, method) (( Enumerator_t2178  (*) (Dictionary_2_t748 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15632_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m15633_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t509  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15633(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t509 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15633_gshared)(__this /* static, unused */, ___key, ___value, method)
