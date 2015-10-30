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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2245;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t382;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2384;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1895;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m16557_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m16557(__this, method) (( void (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1__ctor_m16557_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m16559_gshared (HashSet_1_t2245 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m16559(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2245 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))HashSet_1__ctor_m16559_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16561_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16561(__this, method) (( Object_t* (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16563_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16563(__this, method) (( bool (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16563_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m16565_gshared (HashSet_1_t2245 * __this, ObjectU5BU5D_t96* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m16565(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2245 *, ObjectU5BU5D_t96*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m16565_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16567_gshared (HashSet_1_t2245 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16567(__this, ___item, method) (( void (*) (HashSet_1_t2245 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16567_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m16569_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m16569(__this, method) (( Object_t * (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m16569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m16571_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m16571(__this, method) (( int32_t (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_get_Count_m16571_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m16573_gshared (HashSet_1_t2245 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m16573(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2245 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m16573_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m16575_gshared (HashSet_1_t2245 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m16575(__this, ___size, method) (( void (*) (HashSet_1_t2245 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m16575_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m16577_gshared (HashSet_1_t2245 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m16577(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2245 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m16577_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m16579_gshared (HashSet_1_t2245 * __this, ObjectU5BU5D_t96* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m16579(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2245 *, ObjectU5BU5D_t96*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m16579_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m16581_gshared (HashSet_1_t2245 * __this, ObjectU5BU5D_t96* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m16581(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2245 *, ObjectU5BU5D_t96*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m16581_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m16583_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m16583(__this, method) (( void (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_Resize_m16583_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m16585_gshared (HashSet_1_t2245 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m16585(__this, ___index, method) (( int32_t (*) (HashSet_1_t2245 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m16585_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m16587_gshared (HashSet_1_t2245 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m16587(__this, ___item, method) (( int32_t (*) (HashSet_1_t2245 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m16587_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m16588_gshared (HashSet_1_t2245 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m16588(__this, ___item, method) (( bool (*) (HashSet_1_t2245 *, Object_t *, const MethodInfo*))HashSet_1_Add_m16588_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m16590_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m16590(__this, method) (( void (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_Clear_m16590_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m16592_gshared (HashSet_1_t2245 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m16592(__this, ___item, method) (( bool (*) (HashSet_1_t2245 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m16592_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m16594_gshared (HashSet_1_t2245 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m16594(__this, ___item, method) (( bool (*) (HashSet_1_t2245 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m16594_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m16596_gshared (HashSet_1_t2245 * __this, SerializationInfo_t382 * ___info, StreamingContext_t383  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m16596(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2245 *, SerializationInfo_t382 *, StreamingContext_t383 , const MethodInfo*))HashSet_1_GetObjectData_m16596_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m16598_gshared (HashSet_1_t2245 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m16598(__this, ___sender, method) (( void (*) (HashSet_1_t2245 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m16598_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2249  HashSet_1_GetEnumerator_m16599_gshared (HashSet_1_t2245 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m16599(__this, method) (( Enumerator_t2249  (*) (HashSet_1_t2245 *, const MethodInfo*))HashSet_1_GetEnumerator_m16599_gshared)(__this, method)
