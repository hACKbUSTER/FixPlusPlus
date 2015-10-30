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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1895;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2408;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2409;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2022;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2026;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m12655_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12655(__this, method) (( void (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2__ctor_m12655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12657_gshared (Dictionary_2_t2017 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12657(__this, ___comparer, method) (( void (*) (Dictionary_2_t2017 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12657_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12659_gshared (Dictionary_2_t2017 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12659(__this, ___capacity, method) (( void (*) (Dictionary_2_t2017 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12659_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12661_gshared (Dictionary_2_t2017 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12661(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2017 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m12661_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12663_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12663(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12663_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12665_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2017 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12665_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12667_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12667(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2017 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12667_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12669_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12669(__this, ___key, method) (( bool (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12669_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12671_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12671(__this, ___key, method) (( void (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12671_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12673_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12673(__this, method) (( Object_t * (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12675_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12675(__this, method) (( bool (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12677_gshared (Dictionary_2_t2017 * __this, KeyValuePair_2_t2019  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12677(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2017 *, KeyValuePair_2_t2019 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12677_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12679_gshared (Dictionary_2_t2017 * __this, KeyValuePair_2_t2019  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12679(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2017 *, KeyValuePair_2_t2019 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12679_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12681_gshared (Dictionary_2_t2017 * __this, KeyValuePair_2U5BU5D_t2408* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2017 *, KeyValuePair_2U5BU5D_t2408*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12681_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12683_gshared (Dictionary_2_t2017 * __this, KeyValuePair_2_t2019  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12683(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2017 *, KeyValuePair_2_t2019 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12683_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12685_gshared (Dictionary_2_t2017 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2017 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12687_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12687(__this, method) (( Object_t * (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12687_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12689_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12689(__this, method) (( Object_t* (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12689_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12691_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12691(__this, method) (( Object_t * (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12693_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12693(__this, method) (( int32_t (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_get_Count_m12693_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12695_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12695(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12695_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12697_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2017 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12699_gshared (Dictionary_2_t2017 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12699(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2017 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12699_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12701_gshared (Dictionary_2_t2017 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12701(__this, ___size, method) (( void (*) (Dictionary_2_t2017 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12701_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12703_gshared (Dictionary_2_t2017 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2017 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12703_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2019  Dictionary_2_make_pair_m12705_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12705(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2019  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12707(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12707_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12709_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12709(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12709_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12711_gshared (Dictionary_2_t2017 * __this, KeyValuePair_2U5BU5D_t2408* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2017 *, KeyValuePair_2U5BU5D_t2408*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12711_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m12713_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12713(__this, method) (( void (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_Resize_m12713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12715_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2017 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m12717_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12717(__this, method) (( void (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_Clear_m12717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12719_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12719(__this, ___key, method) (( bool (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12719_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12721_gshared (Dictionary_2_t2017 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12721(__this, ___value, method) (( bool (*) (Dictionary_2_t2017 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12721_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12723_gshared (Dictionary_2_t2017 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12723(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2017 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m12723_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12725_gshared (Dictionary_2_t2017 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12725(__this, ___sender, method) (( void (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12725_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12727_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12727(__this, ___key, method) (( bool (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12729_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12729(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2017 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12729_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2022 * Dictionary_2_get_Keys_m12731_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12731(__this, method) (( KeyCollection_t2022 * (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_get_Keys_m12731_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2026 * Dictionary_2_get_Values_m12733_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12733(__this, method) (( ValueCollection_t2026 * (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_get_Values_m12733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12735_gshared (Dictionary_2_t2017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12735(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12737_gshared (Dictionary_2_t2017 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12737(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2017 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12739_gshared (Dictionary_2_t2017 * __this, KeyValuePair_2_t2019  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12739(__this, ___pair, method) (( bool (*) (Dictionary_2_t2017 *, KeyValuePair_2_t2019 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2024  Dictionary_2_GetEnumerator_m12741_gshared (Dictionary_2_t2017 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12741(__this, method) (( Enumerator_t2024  (*) (Dictionary_2_t2017 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m12743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12743(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12743_gshared)(__this /* static, unused */, ___key, ___value, method)
