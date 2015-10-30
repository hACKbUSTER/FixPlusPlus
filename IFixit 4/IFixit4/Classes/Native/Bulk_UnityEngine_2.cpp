#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.Events.PersistentCall
struct PersistentCall_t346;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t347;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t349;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t351;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t352;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t353;
// System.Object
struct Object_t;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t354;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t355;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t357;
// UnityEngineInternal.GenericStack
struct GenericStack_t265;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t212;
// System.IAsyncResult
struct IAsyncResult_t174;
// System.AsyncCallback
struct AsyncCallback_t175;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
#include "mscorlib_System_AttributeMethodDeclarations.h"
#include "mscorlib_System_Attribute.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
#include "mscorlib_System_Collections_Stack.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_AsyncCallback.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t343_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m1602 (PersistentCall_t346 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t343 * L_0 = (ArgumentCache_t343 *)il2cpp_codegen_object_new (ArgumentCache_t343_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m1598(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_0 = L_0;
		__this->___m_CallState_1 = 2;
		Object__ctor_m179(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t348_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1717_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m1603 (PersistentCallGroup_t347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		List_1__ctor_m1717_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m179(__this, /*hidden argument*/NULL);
		List_1_t348 * L_0 = (List_1_t348 *)il2cpp_codegen_object_new (List_1_t348_il2cpp_TypeInfo_var);
		List_1__ctor_m1717(L_0, /*hidden argument*/List_1__ctor_m1717_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t350_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1718_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m1604 (InvokableCallList_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		List_1__ctor_m1718_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t350 * L_0 = (List_1_t350 *)il2cpp_codegen_object_new (List_1_t350_il2cpp_TypeInfo_var);
		List_1__ctor_m1718(L_0, /*hidden argument*/List_1__ctor_m1718_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t350 * L_1 = (List_1_t350 *)il2cpp_codegen_object_new (List_1_t350_il2cpp_TypeInfo_var);
		List_1__ctor_m1718(L_1, /*hidden argument*/List_1__ctor_m1718_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t350 * L_2 = (List_1_t350 *)il2cpp_codegen_object_new (List_1_t350_il2cpp_TypeInfo_var);
		List_1__ctor_m1718(L_2, /*hidden argument*/List_1__ctor_m1718_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m179(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m1605 (InvokableCallList_t349 * __this, const MethodInfo* method)
{
	{
		List_1_t350 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t349_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t347_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m1606 (UnityEventBase_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		PersistentCallGroup_t347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m179(__this, /*hidden argument*/NULL);
		InvokableCallList_t349 * L_0 = (InvokableCallList_t349 *)il2cpp_codegen_object_new (InvokableCallList_t349_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m1604(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t347 * L_1 = (PersistentCallGroup_t347 *)il2cpp_codegen_object_new (PersistentCallGroup_t347_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m1603(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m187(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1607 (UnityEventBase_t351 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1608 (UnityEventBase_t351 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m1609(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m187(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m1609 (UnityEventBase_t351 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t349 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m1605(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral174;
extern "C" String_t* UnityEventBase_ToString_m1610 (UnityEventBase_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m1719(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m187(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, L_0, _stringLiteral174, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t96_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1611 (UnityEvent_t352 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t96*)SZArrayNew(ObjectU5BU5D_t96_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m1606(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m1612 (DefaultValueAttribute_t353 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m1652(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m1613 (DefaultValueAttribute_t353 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t353_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m1614 (DefaultValueAttribute_t353 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t353 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t353 *)IsInstClass(L_0, DefaultValueAttribute_t353_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t353 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t353 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m1613(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t353 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m1613(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m1615 (DefaultValueAttribute_t353 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m1720(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m1616 (ExcludeFromDocsAttribute_t354 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1652(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m1617 (FormerlySerializedAsAttribute_t355 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1652(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t356_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m1618 (TypeInferenceRuleAttribute_t357 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t356_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m1619(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m1619 (TypeInferenceRuleAttribute_t357 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m1652(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m1620 (TypeInferenceRuleAttribute_t357 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m1621 (GenericStack_t265 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1721(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate__ctor_m1622 (UnityAdsDelegate_t212 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m1623 (UnityAdsDelegate_t212 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m1623((UnityAdsDelegate_t212 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t212(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m1624 (UnityAdsDelegate_t212 * __this, AsyncCallback_t175 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m1625 (UnityAdsDelegate_t212 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
