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

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t2213;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1895;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>[]
struct KeyValuePair_2U5BU5D_t2463;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct IEnumerator_1_t2464;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t2218;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t2222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void Dictionary_2__ctor_m16064_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16064(__this, method) (( void (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2__ctor_m16064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16066_gshared (Dictionary_2_t2213 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16066(__this, ___comparer, method) (( void (*) (Dictionary_2_t2213 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16066_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16068_gshared (Dictionary_2_t2213 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16068(__this, ___capacity, method) (( void (*) (Dictionary_2_t2213 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16068_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16070_gshared (Dictionary_2_t2213 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16070(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2213 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m16070_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16072_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16072(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16072_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16074_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16074(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2213 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16074_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16076_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16076(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2213 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16076_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16078_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16078(__this, ___key, method) (( bool (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16078_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16080_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16080(__this, ___key, method) (( void (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16080_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16082_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16082(__this, method) (( Object_t * (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16084_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16084(__this, method) (( bool (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16084_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16086_gshared (Dictionary_2_t2213 * __this, KeyValuePair_2_t2215  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16086(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2213 *, KeyValuePair_2_t2215 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16086_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16088_gshared (Dictionary_2_t2213 * __this, KeyValuePair_2_t2215  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16088(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2213 *, KeyValuePair_2_t2215 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16088_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16090_gshared (Dictionary_2_t2213 * __this, KeyValuePair_2U5BU5D_t2463* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16090(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2213 *, KeyValuePair_2U5BU5D_t2463*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16090_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16092_gshared (Dictionary_2_t2213 * __this, KeyValuePair_2_t2215  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16092(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2213 *, KeyValuePair_2_t2215 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16092_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16094_gshared (Dictionary_2_t2213 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16094(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2213 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16094_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16096_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16096(__this, method) (( Object_t * (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16096_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16098_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16098(__this, method) (( Object_t* (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16098_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16100_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16100(__this, method) (( Object_t * (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16102_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16102(__this, method) (( int32_t (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_get_Count_m16102_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
extern "C" ProfileData_t602  Dictionary_2_get_Item_m16104_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16104(__this, ___key, method) (( ProfileData_t602  (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16104_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16106_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16106(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2213 *, Object_t *, ProfileData_t602 , const MethodInfo*))Dictionary_2_set_Item_m16106_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16108_gshared (Dictionary_2_t2213 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16108(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2213 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16108_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16110_gshared (Dictionary_2_t2213 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16110(__this, ___size, method) (( void (*) (Dictionary_2_t2213 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16110_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16112_gshared (Dictionary_2_t2213 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16112(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2213 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16112_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2215  Dictionary_2_make_pair_m16114_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16114(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2215  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t602 , const MethodInfo*))Dictionary_2_make_pair_m16114_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16116_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16116(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t602 , const MethodInfo*))Dictionary_2_pick_key_m16116_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
extern "C" ProfileData_t602  Dictionary_2_pick_value_m16118_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16118(__this /* static, unused */, ___key, ___value, method) (( ProfileData_t602  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t602 , const MethodInfo*))Dictionary_2_pick_value_m16118_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16120_gshared (Dictionary_2_t2213 * __this, KeyValuePair_2U5BU5D_t2463* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16120(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2213 *, KeyValuePair_2U5BU5D_t2463*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16120_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Resize()
extern "C" void Dictionary_2_Resize_m16122_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16122(__this, method) (( void (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_Resize_m16122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16124_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16124(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2213 *, Object_t *, ProfileData_t602 , const MethodInfo*))Dictionary_2_Add_m16124_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Clear()
extern "C" void Dictionary_2_Clear_m16126_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16126(__this, method) (( void (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_Clear_m16126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16128_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16128(__this, ___key, method) (( bool (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16128_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16130_gshared (Dictionary_2_t2213 * __this, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16130(__this, ___value, method) (( bool (*) (Dictionary_2_t2213 *, ProfileData_t602 , const MethodInfo*))Dictionary_2_ContainsValue_m16130_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16132_gshared (Dictionary_2_t2213 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16132(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2213 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m16132_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16134_gshared (Dictionary_2_t2213 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16134(__this, ___sender, method) (( void (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16134_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16136_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16136(__this, ___key, method) (( bool (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16136_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16138_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, ProfileData_t602 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16138(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2213 *, Object_t *, ProfileData_t602 *, const MethodInfo*))Dictionary_2_TryGetValue_m16138_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Keys()
extern "C" KeyCollection_t2218 * Dictionary_2_get_Keys_m16140_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16140(__this, method) (( KeyCollection_t2218 * (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_get_Keys_m16140_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Values()
extern "C" ValueCollection_t2222 * Dictionary_2_get_Values_m16142_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16142(__this, method) (( ValueCollection_t2222 * (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_get_Values_m16142_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16144_gshared (Dictionary_2_t2213 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16144(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16144_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
extern "C" ProfileData_t602  Dictionary_2_ToTValue_m16146_gshared (Dictionary_2_t2213 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16146(__this, ___value, method) (( ProfileData_t602  (*) (Dictionary_2_t2213 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16146_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16148_gshared (Dictionary_2_t2213 * __this, KeyValuePair_2_t2215  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16148(__this, ___pair, method) (( bool (*) (Dictionary_2_t2213 *, KeyValuePair_2_t2215 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16148_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t2220  Dictionary_2_GetEnumerator_m16150_gshared (Dictionary_2_t2213 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16150(__this, method) (( Enumerator_t2220  (*) (Dictionary_2_t2213 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16150_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m16152_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t602  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16152(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t602 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16152_gshared)(__this /* static, unused */, ___key, ___value, method)
