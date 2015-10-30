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

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2063;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2062;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>[]
struct KeyValuePair_2U5BU5D_t2416;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct IEnumerator_1_t2417;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2068;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct ValueCollection_t2072;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13307_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13307(__this, method) (( void (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2__ctor_m13307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13309_gshared (Dictionary_2_t2063 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13309(__this, ___comparer, method) (( void (*) (Dictionary_2_t2063 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13309_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13311_gshared (Dictionary_2_t2063 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13311(__this, ___capacity, method) (( void (*) (Dictionary_2_t2063 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13311_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13313_gshared (Dictionary_2_t2063 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13313(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2063 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2__ctor_m13313_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13315_gshared (Dictionary_2_t2063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13315(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13315_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13317_gshared (Dictionary_2_t2063 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13317(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2063 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13317_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13319_gshared (Dictionary_2_t2063 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13319(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2063 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13319_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13321_gshared (Dictionary_2_t2063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13321(__this, ___key, method) (( bool (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13321_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13323_gshared (Dictionary_2_t2063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13323(__this, ___key, method) (( void (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13323_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13325_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13325(__this, method) (( Object_t * (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13325_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13327_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13327(__this, method) (( bool (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13327_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13329_gshared (Dictionary_2_t2063 * __this, KeyValuePair_2_t2065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13329(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2063 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13329_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13331_gshared (Dictionary_2_t2063 * __this, KeyValuePair_2_t2065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13331(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2063 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13331_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13333_gshared (Dictionary_2_t2063 * __this, KeyValuePair_2U5BU5D_t2416* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13333(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2063 *, KeyValuePair_2U5BU5D_t2416*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13333_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13335_gshared (Dictionary_2_t2063 * __this, KeyValuePair_2_t2065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13335(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2063 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13335_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13337_gshared (Dictionary_2_t2063 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13337(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2063 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13337_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13339_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13339(__this, method) (( Object_t * (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13339_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13341_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13341(__this, method) (( Object_t* (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13341_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13343_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13343(__this, method) (( Object_t * (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13343_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13345_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13345(__this, method) (( int32_t (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_get_Count_m13345_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13347_gshared (Dictionary_2_t2063 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13347(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2063 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13347_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13349_gshared (Dictionary_2_t2063 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13349(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2063 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13349_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13351_gshared (Dictionary_2_t2063 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13351(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2063 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13351_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13353_gshared (Dictionary_2_t2063 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13353(__this, ___size, method) (( void (*) (Dictionary_2_t2063 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13353_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13355_gshared (Dictionary_2_t2063 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13355(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2063 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13355_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2065  Dictionary_2_make_pair_m13357_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13357(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2065  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13357_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13359_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13359(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m13359_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13361_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13361(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13361_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13363_gshared (Dictionary_2_t2063 * __this, KeyValuePair_2U5BU5D_t2416* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13363(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2063 *, KeyValuePair_2U5BU5D_t2416*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13363_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13365_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13365(__this, method) (( void (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_Resize_m13365_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13367_gshared (Dictionary_2_t2063 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13367(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2063 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13367_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13369_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13369(__this, method) (( void (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_Clear_m13369_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13371_gshared (Dictionary_2_t2063 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13371(__this, ___key, method) (( bool (*) (Dictionary_2_t2063 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13371_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13373_gshared (Dictionary_2_t2063 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13373(__this, ___value, method) (( bool (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13373_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13375_gshared (Dictionary_2_t2063 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13375(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2063 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))Dictionary_2_GetObjectData_m13375_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13377_gshared (Dictionary_2_t2063 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13377(__this, ___sender, method) (( void (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13377_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13379_gshared (Dictionary_2_t2063 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13379(__this, ___key, method) (( bool (*) (Dictionary_2_t2063 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13379_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13381_gshared (Dictionary_2_t2063 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13381(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2063 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13381_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Keys()
extern "C" KeyCollection_t2068 * Dictionary_2_get_Keys_m13383_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13383(__this, method) (( KeyCollection_t2068 * (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_get_Keys_m13383_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Values()
extern "C" ValueCollection_t2072 * Dictionary_2_get_Values_m13384_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13384(__this, method) (( ValueCollection_t2072 * (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_get_Values_m13384_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13386_gshared (Dictionary_2_t2063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13386(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13386_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13388_gshared (Dictionary_2_t2063 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13388(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2063 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13388_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13390_gshared (Dictionary_2_t2063 * __this, KeyValuePair_2_t2065  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13390(__this, ___pair, method) (( bool (*) (Dictionary_2_t2063 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13390_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2070  Dictionary_2_GetEnumerator_m13392_gshared (Dictionary_2_t2063 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13392(__this, method) (( Enumerator_t2070  (*) (Dictionary_2_t2063 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13392_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1141  Dictionary_2_U3CCopyToU3Em__0_m13394_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13394(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1141  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13394_gshared)(__this /* static, unused */, ___key, ___value, method)
