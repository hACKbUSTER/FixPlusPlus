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

// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2068;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2063;
// System.Collections.Generic.IEnumerator`1<Vuforia.Image/PIXEL_FORMAT>
struct IEnumerator_1_t2418;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t2059;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_18.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m13413_gshared (KeyCollection_t2068 * __this, Dictionary_2_t2063 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m13413(__this, ___dictionary, method) (( void (*) (KeyCollection_t2068 *, Dictionary_2_t2063 *, const MethodInfo*))KeyCollection__ctor_m13413_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13414_gshared (KeyCollection_t2068 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13414(__this, ___item, method) (( void (*) (KeyCollection_t2068 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13415_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13415(__this, method) (( void (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13416_gshared (KeyCollection_t2068 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13416(__this, ___item, method) (( bool (*) (KeyCollection_t2068 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13416_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13417_gshared (KeyCollection_t2068 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13417(__this, ___item, method) (( bool (*) (KeyCollection_t2068 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13417_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13418_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13418(__this, method) (( Object_t* (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13419_gshared (KeyCollection_t2068 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m13419(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2068 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m13419_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13420_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13420(__this, method) (( Object_t * (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13420_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13421_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13421(__this, method) (( bool (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13421_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13422_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m13422(__this, method) (( Object_t * (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m13422_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13423_gshared (KeyCollection_t2068 * __this, PIXEL_FORMATU5BU5D_t2059* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m13423(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2068 *, PIXEL_FORMATU5BU5D_t2059*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m13423_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2069  KeyCollection_GetEnumerator_m13424_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m13424(__this, method) (( Enumerator_t2069  (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_GetEnumerator_m13424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13425_gshared (KeyCollection_t2068 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m13425(__this, method) (( int32_t (*) (KeyCollection_t2068 *, const MethodInfo*))KeyCollection_get_Count_m13425_gshared)(__this, method)
