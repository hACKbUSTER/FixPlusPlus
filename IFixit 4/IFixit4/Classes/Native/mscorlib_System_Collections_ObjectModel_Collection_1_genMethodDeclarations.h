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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2303;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2384;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2302;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m17093_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1__ctor_m17093(__this, method) (( void (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1__ctor_m17093_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17094_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17094(__this, method) (( bool (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17094_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m17095_gshared (Collection_1_t2303 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m17095(__this, ___array, ___index, method) (( void (*) (Collection_1_t2303 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m17095_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m17096_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m17096(__this, method) (( Object_t * (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m17096_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m17097_gshared (Collection_1_t2303 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m17097(__this, ___value, method) (( int32_t (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m17097_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m17098_gshared (Collection_1_t2303 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m17098(__this, ___value, method) (( bool (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m17098_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m17099_gshared (Collection_1_t2303 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m17099(__this, ___value, method) (( int32_t (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m17099_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m17100_gshared (Collection_1_t2303 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m17100(__this, ___index, ___value, method) (( void (*) (Collection_1_t2303 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m17100_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m17101_gshared (Collection_1_t2303 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m17101(__this, ___value, method) (( void (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m17101_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m17102_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m17102(__this, method) (( Object_t * (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m17102_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m17103_gshared (Collection_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m17103(__this, ___index, method) (( Object_t * (*) (Collection_1_t2303 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m17103_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m17104_gshared (Collection_1_t2303 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m17104(__this, ___index, ___value, method) (( void (*) (Collection_1_t2303 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m17104_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m17105_gshared (Collection_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m17105(__this, ___item, method) (( void (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_Add_m17105_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m17106_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_Clear_m17106(__this, method) (( void (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_Clear_m17106_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m17107_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m17107(__this, method) (( void (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_ClearItems_m17107_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m17108_gshared (Collection_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m17108(__this, ___item, method) (( bool (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_Contains_m17108_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m17109_gshared (Collection_1_t2303 * __this, ObjectU5BU5D_t96* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m17109(__this, ___array, ___index, method) (( void (*) (Collection_1_t2303 *, ObjectU5BU5D_t96*, int32_t, const MethodInfo*))Collection_1_CopyTo_m17109_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m17110_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m17110(__this, method) (( Object_t* (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_GetEnumerator_m17110_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m17111_gshared (Collection_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m17111(__this, ___item, method) (( int32_t (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m17111_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m17112_gshared (Collection_1_t2303 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m17112(__this, ___index, ___item, method) (( void (*) (Collection_1_t2303 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m17112_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m17113_gshared (Collection_1_t2303 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m17113(__this, ___index, ___item, method) (( void (*) (Collection_1_t2303 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m17113_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m17114_gshared (Collection_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m17114(__this, ___item, method) (( bool (*) (Collection_1_t2303 *, Object_t *, const MethodInfo*))Collection_1_Remove_m17114_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m17115_gshared (Collection_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m17115(__this, ___index, method) (( void (*) (Collection_1_t2303 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m17115_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m17116_gshared (Collection_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m17116(__this, ___index, method) (( void (*) (Collection_1_t2303 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m17116_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m17117_gshared (Collection_1_t2303 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m17117(__this, method) (( int32_t (*) (Collection_1_t2303 *, const MethodInfo*))Collection_1_get_Count_m17117_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m17118_gshared (Collection_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m17118(__this, ___index, method) (( Object_t * (*) (Collection_1_t2303 *, int32_t, const MethodInfo*))Collection_1_get_Item_m17118_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m17119_gshared (Collection_1_t2303 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m17119(__this, ___index, ___value, method) (( void (*) (Collection_1_t2303 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m17119_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m17120_gshared (Collection_1_t2303 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m17120(__this, ___index, ___item, method) (( void (*) (Collection_1_t2303 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m17120_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m17121_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m17121(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m17121_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m17122_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m17122(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m17122_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m17123_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m17123(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m17123_gshared)(__this /* static, unused */, ___list, method)
