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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1988;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1895;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2404;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2405;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1992;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1996;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12321_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12321(__this, method) (( void (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2__ctor_m12321_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12322_gshared (Dictionary_2_t1988 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12322(__this, ___comparer, method) (( void (*) (Dictionary_2_t1988 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12322_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12324_gshared (Dictionary_2_t1988 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12324(__this, ___capacity, method) (( void (*) (Dictionary_2_t1988 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12324_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12326_gshared (Dictionary_2_t1988 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12326(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1988 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m12326_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12328_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12328(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12328_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12330_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12330(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1988 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12330_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12332_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12332(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1988 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12332_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12334_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12334(__this, ___key, method) (( bool (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12334_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12336_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12336(__this, ___key, method) (( void (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12336_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12338_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12338(__this, method) (( Object_t * (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12338_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12340_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12340(__this, method) (( bool (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12340_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12342_gshared (Dictionary_2_t1988 * __this, KeyValuePair_2_t1990  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12342(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1988 *, KeyValuePair_2_t1990 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12342_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12344_gshared (Dictionary_2_t1988 * __this, KeyValuePair_2_t1990  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12344(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1988 *, KeyValuePair_2_t1990 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12344_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12346_gshared (Dictionary_2_t1988 * __this, KeyValuePair_2U5BU5D_t2404* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12346(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1988 *, KeyValuePair_2U5BU5D_t2404*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12346_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12348_gshared (Dictionary_2_t1988 * __this, KeyValuePair_2_t1990  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12348(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1988 *, KeyValuePair_2_t1990 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12348_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12350_gshared (Dictionary_2_t1988 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12350(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1988 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12350_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12352_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12352(__this, method) (( Object_t * (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12352_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12354_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12354(__this, method) (( Object_t* (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12354_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12356_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12356(__this, method) (( Object_t * (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12356_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12358_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12358(__this, method) (( int32_t (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_get_Count_m12358_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12360_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12360(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12360_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12362_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12362(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1988 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12362_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12364_gshared (Dictionary_2_t1988 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12364(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1988 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12364_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12366_gshared (Dictionary_2_t1988 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12366(__this, ___size, method) (( void (*) (Dictionary_2_t1988 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12366_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12368_gshared (Dictionary_2_t1988 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12368(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1988 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12368_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1990  Dictionary_2_make_pair_m12370_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12370(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1990  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12370_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12372_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12372(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m12372_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12374_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12374(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12374_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12376_gshared (Dictionary_2_t1988 * __this, KeyValuePair_2U5BU5D_t2404* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12376(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1988 *, KeyValuePair_2U5BU5D_t2404*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12376_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12378_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12378(__this, method) (( void (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_Resize_m12378_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12380_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12380(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1988 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12380_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12382_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12382(__this, method) (( void (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_Clear_m12382_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12384_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12384(__this, ___key, method) (( bool (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12384_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12386_gshared (Dictionary_2_t1988 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12386(__this, ___value, method) (( bool (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12386_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12388_gshared (Dictionary_2_t1988 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12388(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1988 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m12388_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12390_gshared (Dictionary_2_t1988 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12390(__this, ___sender, method) (( void (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12390_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12392_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12392(__this, ___key, method) (( bool (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12392_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12394_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12394(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1988 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12394_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1992 * Dictionary_2_get_Keys_m12396_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12396(__this, method) (( KeyCollection_t1992 * (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_get_Keys_m12396_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1996 * Dictionary_2_get_Values_m12397_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12397(__this, method) (( ValueCollection_t1996 * (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_get_Values_m12397_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12399_gshared (Dictionary_2_t1988 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12399(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12399_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12401_gshared (Dictionary_2_t1988 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12401(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1988 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12401_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12403_gshared (Dictionary_2_t1988 * __this, KeyValuePair_2_t1990  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12403(__this, ___pair, method) (( bool (*) (Dictionary_2_t1988 *, KeyValuePair_2_t1990 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12403_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1994  Dictionary_2_GetEnumerator_m12405_gshared (Dictionary_2_t1988 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12405(__this, method) (( Enumerator_t1994  (*) (Dictionary_2_t1988 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12405_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m12407_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12407(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12407_gshared)(__this /* static, unused */, ___key, ___value, method)
