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

// System.Reflection.Binder/Default
struct Default_t1402;
// System.Reflection.MethodBase
struct MethodBase_t413;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1826;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t405;
// System.Globalization.CultureInfo
struct CultureInfo_t406;
// System.String[]
struct StringU5BU5D_t323;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t370;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t414;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1827;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder/Default::.ctor()
extern "C" void Default__ctor_m8646 (Default_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern "C" MethodBase_t413 * Default_BindToMethod_m8647 (Default_t1402 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1826* ___match, ObjectU5BU5D_t96** ___args, ParameterModifierU5BU5D_t405* ___modifiers, CultureInfo_t406 * ___culture, StringU5BU5D_t323* ___names, Object_t ** ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern "C" void Default_ReorderParameters_m8648 (Default_t1402 * __this, StringU5BU5D_t323* ___names, ObjectU5BU5D_t96** ___args, MethodBase_t413 * ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C" bool Default_IsArrayAssignable_m8649 (Object_t * __this /* static, unused */, Type_t * ___object_type, Type_t * ___target_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern "C" Object_t * Default_ChangeType_m8650 (Default_t1402 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t406 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern "C" void Default_ReorderArgumentArray_m8651 (Default_t1402 * __this, ObjectU5BU5D_t96** ___args, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C" bool Default_check_type_m8652 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C" bool Default_check_arguments_m8653 (Object_t * __this /* static, unused */, TypeU5BU5D_t370* ___types, ParameterInfoU5BU5D_t414* ___args, bool ___allowByRefMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodBase_t413 * Default_SelectMethod_m8654 (Default_t1402 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1826* ___match, TypeU5BU5D_t370* ___types, ParameterModifierU5BU5D_t405* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C" MethodBase_t413 * Default_SelectMethod_m8655 (Default_t1402 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1826* ___match, TypeU5BU5D_t370* ___types, ParameterModifierU5BU5D_t405* ___modifiers, bool ___allowByRefMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C" MethodBase_t413 * Default_GetBetterMethod_m8656 (Default_t1402 * __this, MethodBase_t413 * ___m1, MethodBase_t413 * ___m2, TypeU5BU5D_t370* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern "C" int32_t Default_CompareCloserType_m8657 (Default_t1402 * __this, Type_t * ___t1, Type_t * ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Default_SelectProperty_m8658 (Default_t1402 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t1827* ___match, Type_t * ___returnType, TypeU5BU5D_t370* ___indexes, ParameterModifierU5BU5D_t405* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C" int32_t Default_check_arguments_with_score_m8659 (Object_t * __this /* static, unused */, TypeU5BU5D_t370* ___types, ParameterInfoU5BU5D_t414* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C" int32_t Default_check_type_with_score_m8660 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
