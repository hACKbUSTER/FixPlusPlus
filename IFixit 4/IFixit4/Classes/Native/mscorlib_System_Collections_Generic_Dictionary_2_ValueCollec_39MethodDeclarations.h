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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2124;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2115;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t2433;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// System.UInt16[]
struct UInt16U5BU5D_t1024;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m14396_gshared (ValueCollection_t2124 * __this, Dictionary_2_t2115 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m14396(__this, ___dictionary, method) (( void (*) (ValueCollection_t2124 *, Dictionary_2_t2115 *, const MethodInfo*))ValueCollection__ctor_m14396_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14397_gshared (ValueCollection_t2124 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14397(__this, ___item, method) (( void (*) (ValueCollection_t2124 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14397_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14398_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14398(__this, method) (( void (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14398_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14399_gshared (ValueCollection_t2124 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14399(__this, ___item, method) (( bool (*) (ValueCollection_t2124 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14399_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14400_gshared (ValueCollection_t2124 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14400(__this, ___item, method) (( bool (*) (ValueCollection_t2124 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14400_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14401_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14401(__this, method) (( Object_t* (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14401_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m14402_gshared (ValueCollection_t2124 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m14402(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2124 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m14402_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14403_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14403(__this, method) (( Object_t * (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14403_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14404_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14404(__this, method) (( bool (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m14405_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m14405(__this, method) (( Object_t * (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m14405_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m14406_gshared (ValueCollection_t2124 * __this, UInt16U5BU5D_t1024* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m14406(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2124 *, UInt16U5BU5D_t1024*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m14406_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2125  ValueCollection_GetEnumerator_m14407_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m14407(__this, method) (( Enumerator_t2125  (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_GetEnumerator_m14407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m14408_gshared (ValueCollection_t2124 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m14408(__this, method) (( int32_t (*) (ValueCollection_t2124 *, const MethodInfo*))ValueCollection_get_Count_m14408_gshared)(__this, method)
