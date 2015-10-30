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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2115;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1895;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t2431;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t2432;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t2120;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m14252_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14252(__this, method) (( void (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2__ctor_m14252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14254_gshared (Dictionary_2_t2115 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14254(__this, ___comparer, method) (( void (*) (Dictionary_2_t2115 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14254_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14256_gshared (Dictionary_2_t2115 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14256(__this, ___capacity, method) (( void (*) (Dictionary_2_t2115 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14256_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14258_gshared (Dictionary_2_t2115 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14258(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2115 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m14258_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14260_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14260(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14260_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14262_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2115 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14262_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14264_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14264(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2115 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14264_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14266_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14266(__this, ___key, method) (( bool (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14266_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14268_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14268(__this, ___key, method) (( void (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14268_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14270_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14270(__this, method) (( Object_t * (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14272_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14272(__this, method) (( bool (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14274_gshared (Dictionary_2_t2115 * __this, KeyValuePair_2_t2117  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14274(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2115 *, KeyValuePair_2_t2117 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14274_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14276_gshared (Dictionary_2_t2115 * __this, KeyValuePair_2_t2117  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14276(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2115 *, KeyValuePair_2_t2117 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14276_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14278_gshared (Dictionary_2_t2115 * __this, KeyValuePair_2U5BU5D_t2431* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14278(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2115 *, KeyValuePair_2U5BU5D_t2431*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14278_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14280_gshared (Dictionary_2_t2115 * __this, KeyValuePair_2_t2117  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14280(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2115 *, KeyValuePair_2_t2117 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14280_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14282_gshared (Dictionary_2_t2115 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14282(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2115 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14282_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14284_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14284(__this, method) (( Object_t * (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14284_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14286_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14286(__this, method) (( Object_t* (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14286_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14288_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14288(__this, method) (( Object_t * (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14288_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14290_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14290(__this, method) (( int32_t (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_get_Count_m14290_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m14292_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14292(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14292_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14294_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14294(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2115 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m14294_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14296_gshared (Dictionary_2_t2115 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14296(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2115 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14296_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14298_gshared (Dictionary_2_t2115 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14298(__this, ___size, method) (( void (*) (Dictionary_2_t2115 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14298_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14300_gshared (Dictionary_2_t2115 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14300(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2115 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14300_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2117  Dictionary_2_make_pair_m14302_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14302(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2117  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m14302_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14304_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14304(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m14304_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m14306_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14306(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m14306_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14308_gshared (Dictionary_2_t2115 * __this, KeyValuePair_2U5BU5D_t2431* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14308(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2115 *, KeyValuePair_2U5BU5D_t2431*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14308_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m14310_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14310(__this, method) (( void (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_Resize_m14310_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14312_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14312(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2115 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m14312_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m14314_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14314(__this, method) (( void (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_Clear_m14314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14316_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14316(__this, ___key, method) (( bool (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14316_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14318_gshared (Dictionary_2_t2115 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14318(__this, ___value, method) (( bool (*) (Dictionary_2_t2115 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m14318_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14320_gshared (Dictionary_2_t2115 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14320(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2115 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m14320_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14322_gshared (Dictionary_2_t2115 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14322(__this, ___sender, method) (( void (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14322_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14324_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14324(__this, ___key, method) (( bool (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14324_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14326_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14326(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2115 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14326_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t2120 * Dictionary_2_get_Keys_m14328_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14328(__this, method) (( KeyCollection_t2120 * (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_get_Keys_m14328_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t2124 * Dictionary_2_get_Values_m14330_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14330(__this, method) (( ValueCollection_t2124 * (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_get_Values_m14330_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14332_gshared (Dictionary_2_t2115 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14332(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14332_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m14334_gshared (Dictionary_2_t2115 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14334(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t2115 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14334_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14336_gshared (Dictionary_2_t2115 * __this, KeyValuePair_2_t2117  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14336(__this, ___pair, method) (( bool (*) (Dictionary_2_t2115 *, KeyValuePair_2_t2117 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14336_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2122  Dictionary_2_GetEnumerator_m14338_gshared (Dictionary_2_t2115 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14338(__this, method) (( Enumerator_t2122  (*) (Dictionary_2_t2115 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14338_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m14340_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14340(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14340_gshared)(__this /* static, unused */, ___key, ___value, method)
