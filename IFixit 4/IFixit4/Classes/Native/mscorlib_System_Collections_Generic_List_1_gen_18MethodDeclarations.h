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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t583;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t772;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2385;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2429;
// System.Int32[]
struct Int32U5BU5D_t113;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m3870_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1__ctor_m3870(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1__ctor_m3870_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m3813_gshared (List_1_t583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3813(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1__ctor_m3813_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14094_gshared (List_1_t583 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14094(__this, ___capacity, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1__ctor_m14094_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14095_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14095(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14095_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14096_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14096(__this, method) (( Object_t* (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14097_gshared (List_1_t583 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14097(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t583 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14097_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14098_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14098(__this, method) (( Object_t * (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14099_gshared (List_1_t583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14099(__this, ___item, method) (( int32_t (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14100_gshared (List_1_t583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14100(__this, ___item, method) (( bool (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14100_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14101_gshared (List_1_t583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14101(__this, ___item, method) (( int32_t (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14102_gshared (List_1_t583 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14102(__this, ___index, ___item, method) (( void (*) (List_1_t583 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14102_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14103_gshared (List_1_t583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14103(__this, ___item, method) (( void (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14103_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14104_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14104(__this, method) (( bool (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14105_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14105(__this, method) (( Object_t * (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14105_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14106_gshared (List_1_t583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14106(__this, ___index, method) (( Object_t * (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14106_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14107_gshared (List_1_t583 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14107(__this, ___index, ___value, method) (( void (*) (List_1_t583 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14107_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14108_gshared (List_1_t583 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14108(__this, ___item, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_Add_m14108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14109_gshared (List_1_t583 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14109(__this, ___newCount, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14109_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14110_gshared (List_1_t583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14110(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14110_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14111_gshared (List_1_t583 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14111(__this, ___enumerable, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14111_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14112_gshared (List_1_t583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14112(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_AddRange_m14112_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14113_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_Clear_m14113(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1_Clear_m14113_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14114_gshared (List_1_t583 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14114(__this, ___item, method) (( bool (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_Contains_m14114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14115_gshared (List_1_t583 * __this, Int32U5BU5D_t113* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14115(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t583 *, Int32U5BU5D_t113*, int32_t, const MethodInfo*))List_1_CopyTo_m14115_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t688  List_1_GetEnumerator_m3814_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3814(__this, method) (( Enumerator_t688  (*) (List_1_t583 *, const MethodInfo*))List_1_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14116_gshared (List_1_t583 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14116(__this, ___item, method) (( int32_t (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_IndexOf_m14116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14117_gshared (List_1_t583 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14117(__this, ___start, ___delta, method) (( void (*) (List_1_t583 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14117_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14118_gshared (List_1_t583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14118(__this, ___index, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14119_gshared (List_1_t583 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14119(__this, ___index, ___item, method) (( void (*) (List_1_t583 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14119_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14120_gshared (List_1_t583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14120(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14120_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14121_gshared (List_1_t583 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14121(__this, ___item, method) (( bool (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_Remove_m14121_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14122_gshared (List_1_t583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14122(__this, ___index, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14122_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t113* List_1_ToArray_m14123_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_ToArray_m14123(__this, method) (( Int32U5BU5D_t113* (*) (List_1_t583 *, const MethodInfo*))List_1_ToArray_m14123_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14124_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14124(__this, method) (( int32_t (*) (List_1_t583 *, const MethodInfo*))List_1_get_Capacity_m14124_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14125_gshared (List_1_t583 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14125(__this, ___value, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14125_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14126_gshared (List_1_t583 * __this, const MethodInfo* method);
#define List_1_get_Count_m14126(__this, method) (( int32_t (*) (List_1_t583 *, const MethodInfo*))List_1_get_Count_m14126_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14127_gshared (List_1_t583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14127(__this, ___index, method) (( int32_t (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_get_Item_m14127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14128_gshared (List_1_t583 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14128(__this, ___index, ___value, method) (( void (*) (List_1_t583 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14128_gshared)(__this, ___index, ___value, method)
