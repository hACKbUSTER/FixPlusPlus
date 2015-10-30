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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1895;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2382;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2383;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1901;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1905;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11271_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11271(__this, method) (( void (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2__ctor_m11271_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11273_gshared (Dictionary_2_t1893 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11273(__this, ___comparer, method) (( void (*) (Dictionary_2_t1893 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11273_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11274_gshared (Dictionary_2_t1893 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11274(__this, ___capacity, method) (( void (*) (Dictionary_2_t1893 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11274_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11276_gshared (Dictionary_2_t1893 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11276(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1893 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m11276_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11278_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11278(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11278_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11280_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11280(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1893 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11280_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11282_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11282(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1893 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11282_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11284_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11284(__this, ___key, method) (( bool (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11284_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11286_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11286(__this, ___key, method) (( void (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11286_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11288_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11288(__this, method) (( Object_t * (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11290_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11290(__this, method) (( bool (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11292_gshared (Dictionary_2_t1893 * __this, KeyValuePair_2_t1896  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11292(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1893 *, KeyValuePair_2_t1896 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11292_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11294_gshared (Dictionary_2_t1893 * __this, KeyValuePair_2_t1896  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11294(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1893 *, KeyValuePair_2_t1896 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11294_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11296_gshared (Dictionary_2_t1893 * __this, KeyValuePair_2U5BU5D_t2382* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11296(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1893 *, KeyValuePair_2U5BU5D_t2382*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11296_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11298_gshared (Dictionary_2_t1893 * __this, KeyValuePair_2_t1896  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11298(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1893 *, KeyValuePair_2_t1896 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11298_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11300_gshared (Dictionary_2_t1893 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11300(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1893 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11300_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11302_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11302(__this, method) (( Object_t * (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11302_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11304_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11304(__this, method) (( Object_t* (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11304_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11306_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11306(__this, method) (( Object_t * (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11306_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11308_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11308(__this, method) (( int32_t (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_get_Count_m11308_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11310_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11310(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11310_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11312_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11312(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1893 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11312_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11314_gshared (Dictionary_2_t1893 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11314(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1893 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11314_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11316_gshared (Dictionary_2_t1893 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11316(__this, ___size, method) (( void (*) (Dictionary_2_t1893 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11316_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11318_gshared (Dictionary_2_t1893 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11318(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1893 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11318_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1896  Dictionary_2_make_pair_m11320_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11320(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1896  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11320_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11322_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11322(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11322_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11324_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11324(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11324_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11326_gshared (Dictionary_2_t1893 * __this, KeyValuePair_2U5BU5D_t2382* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11326(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1893 *, KeyValuePair_2U5BU5D_t2382*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11326_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11328_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11328(__this, method) (( void (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_Resize_m11328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11330_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11330(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1893 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11330_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11332_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11332(__this, method) (( void (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_Clear_m11332_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11334_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11334(__this, ___key, method) (( bool (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11334_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11336_gshared (Dictionary_2_t1893 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11336(__this, ___value, method) (( bool (*) (Dictionary_2_t1893 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11336_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11338_gshared (Dictionary_2_t1893 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11338(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1893 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m11338_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11340_gshared (Dictionary_2_t1893 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11340(__this, ___sender, method) (( void (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11340_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11342_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11342(__this, ___key, method) (( bool (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11342_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11344_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11344(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1893 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11344_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1901 * Dictionary_2_get_Keys_m11346_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11346(__this, method) (( KeyCollection_t1901 * (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_get_Keys_m11346_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1905 * Dictionary_2_get_Values_m11348_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11348(__this, method) (( ValueCollection_t1905 * (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_get_Values_m11348_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11350_gshared (Dictionary_2_t1893 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11350(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11350_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11352_gshared (Dictionary_2_t1893 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11352(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1893 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11352_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11354_gshared (Dictionary_2_t1893 * __this, KeyValuePair_2_t1896  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11354(__this, ___pair, method) (( bool (*) (Dictionary_2_t1893 *, KeyValuePair_2_t1896 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11354_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1903  Dictionary_2_GetEnumerator_m11356_gshared (Dictionary_2_t1893 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11356(__this, method) (( Enumerator_t1903  (*) (Dictionary_2_t1893 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11356_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m11358_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11358(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11358_gshared)(__this /* static, unused */, ___key, ___value, method)
