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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t119;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t120;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2384;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2388;
// System.Object[]
struct ObjectU5BU5D_t96;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11574_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1__ctor_m11574(__this, method) (( void (*) (List_1_t119 *, const MethodInfo*))List_1__ctor_m11574_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11576_gshared (List_1_t119 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11576(__this, ___collection, method) (( void (*) (List_1_t119 *, Object_t*, const MethodInfo*))List_1__ctor_m11576_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11578_gshared (List_1_t119 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11578(__this, ___capacity, method) (( void (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1__ctor_m11578_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11580_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11580(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11580_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11582_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11582(__this, method) (( Object_t* (*) (List_1_t119 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11582_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11584_gshared (List_1_t119 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11584(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t119 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11584_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11586_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11586(__this, method) (( Object_t * (*) (List_1_t119 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11586_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11588_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11588(__this, ___item, method) (( int32_t (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11588_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11590_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11590(__this, ___item, method) (( bool (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11590_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11592_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11592(__this, ___item, method) (( int32_t (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11592_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11594_gshared (List_1_t119 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11594(__this, ___index, ___item, method) (( void (*) (List_1_t119 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11594_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11596_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11596(__this, ___item, method) (( void (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11596_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11598_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11598(__this, method) (( bool (*) (List_1_t119 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11598_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11600_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11600(__this, method) (( Object_t * (*) (List_1_t119 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11600_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11602_gshared (List_1_t119 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11602(__this, ___index, method) (( Object_t * (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11602_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11604_gshared (List_1_t119 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11604(__this, ___index, ___value, method) (( void (*) (List_1_t119 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11604_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11606_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11606(__this, ___item, method) (( void (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_Add_m11606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11608_gshared (List_1_t119 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11608(__this, ___newCount, method) (( void (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11608_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11610_gshared (List_1_t119 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11610(__this, ___collection, method) (( void (*) (List_1_t119 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11610_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11612_gshared (List_1_t119 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11612(__this, ___enumerable, method) (( void (*) (List_1_t119 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11612_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11613_gshared (List_1_t119 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11613(__this, ___collection, method) (( void (*) (List_1_t119 *, Object_t*, const MethodInfo*))List_1_AddRange_m11613_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11615_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_Clear_m11615(__this, method) (( void (*) (List_1_t119 *, const MethodInfo*))List_1_Clear_m11615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11617_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11617(__this, ___item, method) (( bool (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_Contains_m11617_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11619_gshared (List_1_t119 * __this, ObjectU5BU5D_t96* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11619(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t119 *, ObjectU5BU5D_t96*, int32_t, const MethodInfo*))List_1_CopyTo_m11619_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1926  List_1_GetEnumerator_m11620_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11620(__this, method) (( Enumerator_t1926  (*) (List_1_t119 *, const MethodInfo*))List_1_GetEnumerator_m11620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11622_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11622(__this, ___item, method) (( int32_t (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11622_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11624_gshared (List_1_t119 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11624(__this, ___start, ___delta, method) (( void (*) (List_1_t119 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11624_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11626_gshared (List_1_t119 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11626(__this, ___index, method) (( void (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11626_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11628_gshared (List_1_t119 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11628(__this, ___index, ___item, method) (( void (*) (List_1_t119 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11630_gshared (List_1_t119 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11630(__this, ___collection, method) (( void (*) (List_1_t119 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11630_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11632_gshared (List_1_t119 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11632(__this, ___item, method) (( bool (*) (List_1_t119 *, Object_t *, const MethodInfo*))List_1_Remove_m11632_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11634_gshared (List_1_t119 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11634(__this, ___index, method) (( void (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11634_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t96* List_1_ToArray_m11636_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_ToArray_m11636(__this, method) (( ObjectU5BU5D_t96* (*) (List_1_t119 *, const MethodInfo*))List_1_ToArray_m11636_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11638_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11638(__this, method) (( int32_t (*) (List_1_t119 *, const MethodInfo*))List_1_get_Capacity_m11638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11640_gshared (List_1_t119 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11640(__this, ___value, method) (( void (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11640_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11642_gshared (List_1_t119 * __this, const MethodInfo* method);
#define List_1_get_Count_m11642(__this, method) (( int32_t (*) (List_1_t119 *, const MethodInfo*))List_1_get_Count_m11642_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11644_gshared (List_1_t119 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11644(__this, ___index, method) (( Object_t * (*) (List_1_t119 *, int32_t, const MethodInfo*))List_1_get_Item_m11644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11646_gshared (List_1_t119 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11646(__this, ___index, ___value, method) (( void (*) (List_1_t119 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11646_gshared)(__this, ___index, ___value, method)
