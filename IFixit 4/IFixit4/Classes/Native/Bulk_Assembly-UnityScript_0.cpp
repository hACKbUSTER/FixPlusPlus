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

// AnimationScrollTexture
struct AnimationScrollTexture_t123;
// UnityEngine.Renderer
struct Renderer_t85;
// System.Object
struct Object_t;
// AnimationSpriteSheet
struct AnimationSpriteSheet_t124;
// DeadTime
struct DeadTime_t125;
// SampleSceneGUI
struct SampleSceneGUI_t126;
// StopCAM
struct StopCAM_t128;
// UnityEngine.Animation
struct Animation_t129;
// VisibleBG
struct VisibleBG_t130;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_AnimationScrollTexture.h"
#include "AssemblyU2DUnityScript_AnimationScrollTextureMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Renderer.h"
#include "UnityEngine_UnityEngine_Material.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DUnityScript_AnimationSpriteSheet.h"
#include "AssemblyU2DUnityScript_AnimationSpriteSheetMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_String.h"
#include "AssemblyU2DUnityScript_DeadTime.h"
#include "AssemblyU2DUnityScript_DeadTimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "AssemblyU2DUnityScript_SampleSceneGUI.h"
#include "AssemblyU2DUnityScript_SampleSceneGUIMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUISkin.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIContent.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DUnityScript_StopCAM.h"
#include "AssemblyU2DUnityScript_StopCAMMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animation.h"
#include "AssemblyU2DUnityScript_VisibleBG.h"
#include "AssemblyU2DUnityScript_VisibleBGMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m274_gshared (Component_t121 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m274(__this, method) (( Object_t * (*) (Component_t121 *, const MethodInfo*))Component_GetComponent_TisObject_t_m274_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t85_m210(__this, method) (( Renderer_t85 * (*) (Component_t121 *, const MethodInfo*))Component_GetComponent_TisObject_t_m274_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
#define Component_GetComponent_TisAnimation_t129_m310(__this, method) (( Animation_t129 * (*) (Component_t121 *, const MethodInfo*))Component_GetComponent_TisObject_t_m274_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationScrollTexture::.ctor()
extern "C" void AnimationScrollTexture__ctor_m279 (AnimationScrollTexture_t123 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m123(__this, /*hidden argument*/NULL);
		__this->___Speed_2 = (0.25f);
		return;
	}
}
// System.Void AnimationScrollTexture::FixedUpdate()
extern const MethodInfo* Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var;
extern "C" void AnimationScrollTexture_FixedUpdate_m280 (AnimationScrollTexture_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m297(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___Speed_2);
		V_0 = ((float)((float)L_0*(float)((-L_1))));
		Renderer_t85 * L_2 = Component_GetComponent_TisRenderer_t85_m210(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var);
		NullCheck(L_2);
		Material_t70 * L_3 = Renderer_get_material_m298(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		Vector2_t131  L_5 = {0};
		Vector2__ctor_m299(&L_5, (((float)((float)0))), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_mainTextureOffset_m300(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimationScrollTexture::Main()
extern "C" void AnimationScrollTexture_Main_m281 (AnimationScrollTexture_t123 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AnimationSpriteSheet::.ctor()
extern "C" void AnimationSpriteSheet__ctor_m282 (AnimationSpriteSheet_t124 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m123(__this, /*hidden argument*/NULL);
		__this->___uvX_2 = 4;
		__this->___uvY_3 = 2;
		__this->___fps_4 = (24.0f);
		return;
	}
}
// System.Void AnimationSpriteSheet::Update()
extern const MethodInfo* Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern "C" void AnimationSpriteSheet_Update_m283 (AnimationSpriteSheet_t124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t131  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_t131  V_4 = {0};
	{
		float L_0 = Time_get_time_m297(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___fps_4);
		V_0 = (((int32_t)((int32_t)((float)((float)L_0*(float)L_1)))));
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___uvX_2);
		int32_t L_4 = (__this->___uvY_3);
		V_0 = ((int32_t)((int32_t)L_2%(int32_t)((int32_t)((int32_t)L_3*(int32_t)L_4))));
		int32_t L_5 = (__this->___uvX_2);
		int32_t L_6 = (__this->___uvY_3);
		Vector2_t131  L_7 = {0};
		Vector2__ctor_m299(&L_7, ((float)((float)(1.0f)/(float)(((float)((float)L_5))))), ((float)((float)(1.0f)/(float)(((float)((float)L_6))))), /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = (__this->___uvX_2);
		V_2 = ((int32_t)((int32_t)L_8%(int32_t)L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = (__this->___uvX_2);
		V_3 = ((int32_t)((int32_t)L_10/(int32_t)L_11));
		int32_t L_12 = V_2;
		float L_13 = ((&V_1)->___x_1);
		float L_14 = ((&V_1)->___y_2);
		int32_t L_15 = V_3;
		float L_16 = ((&V_1)->___y_2);
		Vector2_t131  L_17 = {0};
		Vector2__ctor_m299(&L_17, ((float)((float)(((float)((float)L_12)))*(float)L_13)), ((float)((float)((float)((float)(1.0f)-(float)L_14))-(float)((float)((float)(((float)((float)L_15)))*(float)L_16)))), /*hidden argument*/NULL);
		V_4 = L_17;
		Renderer_t85 * L_18 = Component_GetComponent_TisRenderer_t85_m210(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var);
		NullCheck(L_18);
		Material_t70 * L_19 = Renderer_get_material_m298(L_18, /*hidden argument*/NULL);
		Vector2_t131  L_20 = V_4;
		NullCheck(L_19);
		Material_SetTextureOffset_m301(L_19, _stringLiteral42, L_20, /*hidden argument*/NULL);
		Renderer_t85 * L_21 = Component_GetComponent_TisRenderer_t85_m210(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t85_m210_MethodInfo_var);
		NullCheck(L_21);
		Material_t70 * L_22 = Renderer_get_material_m298(L_21, /*hidden argument*/NULL);
		Vector2_t131  L_23 = V_1;
		NullCheck(L_22);
		Material_SetTextureScale_m302(L_22, _stringLiteral42, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimationSpriteSheet::Main()
extern "C" void AnimationSpriteSheet_Main_m284 (AnimationSpriteSheet_t124 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadTime::.ctor()
extern "C" void DeadTime__ctor_m285 (DeadTime_t125 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m123(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadTime::Awake()
extern "C" void DeadTime_Awake_m286 (DeadTime_t125 * __this, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m227(__this, /*hidden argument*/NULL);
		float L_1 = (__this->___deadTime_2);
		Object_Destroy_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadTime::Main()
extern "C" void DeadTime_Main_m287 (DeadTime_t125 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SampleSceneGUI::.ctor()
extern "C" void SampleSceneGUI__ctor_m288 (SampleSceneGUI_t126 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m123(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleSceneGUI::OnGUI()
extern TypeInfo* GUI_t83_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t132_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral54;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral65;
extern Il2CppCodeGenString* _stringLiteral66;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral70;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral72;
extern Il2CppCodeGenString* _stringLiteral73;
extern "C" void SampleSceneGUI_OnGUI_m289 (SampleSceneGUI_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUIContent_t132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISkin_t127 * L_0 = (__this->___mySkin_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		GUI_set_skin_m304(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Rect_t82  L_1 = {0};
		Rect__ctor_m134(&L_1, (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		GUI_Label_m157(NULL /*static, unused*/, L_1, _stringLiteral43, /*hidden argument*/NULL);
		Rect_t82  L_2 = {0};
		Rect__ctor_m134(&L_2, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_4 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_4, L_3, _stringLiteral44, /*hidden argument*/NULL);
		bool L_5 = GUI_Button_m306(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		GameObject_t4 * L_6 = (__this->___effect01_3);
		Vector3_t10  L_7 = {0};
		Vector3__ctor_m130(&L_7, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_8 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0078:
	{
		Rect_t82  L_9 = {0};
		Rect__ctor_m134(&L_9, (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_11 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_11, L_10, _stringLiteral45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_12 = GUI_Button_m306(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c7;
		}
	}
	{
		GameObject_t4 * L_13 = (__this->___effect02_4);
		Vector3_t10  L_14 = {0};
		Vector3__ctor_m130(&L_14, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_15 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		Rect_t82  L_16 = {0};
		Rect__ctor_m134(&L_16, (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_18 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_18, L_17, _stringLiteral46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_19 = GUI_Button_m306(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0116;
		}
	}
	{
		GameObject_t4 * L_20 = (__this->___effect03_5);
		Vector3_t10  L_21 = {0};
		Vector3__ctor_m130(&L_21, (((float)((float)0))), (2.0f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_22 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_0116:
	{
		Rect_t82  L_23 = {0};
		Rect__ctor_m134(&L_23, (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_25 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_25, L_24, _stringLiteral47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_26 = GUI_Button_m306(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0165;
		}
	}
	{
		GameObject_t4 * L_27 = (__this->___effect04_6);
		Vector3_t10  L_28 = {0};
		Vector3__ctor_m130(&L_28, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_29 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_0165:
	{
		Rect_t82  L_30 = {0};
		Rect__ctor_m134(&L_30, (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_32 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_32, L_31, _stringLiteral48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_33 = GUI_Button_m306(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_01b7;
		}
	}
	{
		GameObject_t4 * L_34 = (__this->___effect05_7);
		Vector3_t10  L_35 = {0};
		Vector3__ctor_m130(&L_35, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_36 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
	}

IL_01b7:
	{
		Rect_t82  L_37 = {0};
		Rect__ctor_m134(&L_37, (((float)((float)((int32_t)160)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_39 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_39, L_38, _stringLiteral49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_40 = GUI_Button_m306(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0209;
		}
	}
	{
		GameObject_t4 * L_41 = (__this->___effect06_8);
		Vector3_t10  L_42 = {0};
		Vector3__ctor_m130(&L_42, (((float)((float)0))), (0.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_43 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/NULL);
	}

IL_0209:
	{
		Rect_t82  L_44 = {0};
		Rect__ctor_m134(&L_44, (((float)((float)((int32_t)190)))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_46 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_46, L_45, _stringLiteral50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_47 = GUI_Button_m306(NULL /*static, unused*/, L_44, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_025b;
		}
	}
	{
		GameObject_t4 * L_48 = (__this->___effect07_9);
		Vector3_t10  L_49 = {0};
		Vector3__ctor_m130(&L_49, (((float)((float)0))), (0.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_50 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/NULL);
	}

IL_025b:
	{
		Rect_t82  L_51 = {0};
		Rect__ctor_m134(&L_51, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_53 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_53, L_52, _stringLiteral51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_54 = GUI_Button_m306(NULL /*static, unused*/, L_51, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_02aa;
		}
	}
	{
		GameObject_t4 * L_55 = (__this->___effect08_10);
		Vector3_t10  L_56 = {0};
		Vector3__ctor_m130(&L_56, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_57 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_55, L_56, L_57, /*hidden argument*/NULL);
	}

IL_02aa:
	{
		Rect_t82  L_58 = {0};
		Rect__ctor_m134(&L_58, (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_60 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_60, L_59, _stringLiteral52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_61 = GUI_Button_m306(NULL /*static, unused*/, L_58, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02f6;
		}
	}
	{
		GameObject_t4 * L_62 = (__this->___effect09_11);
		Vector3_t10  L_63 = {0};
		Vector3__ctor_m130(&L_63, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_64 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_62, L_63, L_64, /*hidden argument*/NULL);
	}

IL_02f6:
	{
		Rect_t82  L_65 = {0};
		Rect__ctor_m134(&L_65, (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_67 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_67, L_66, _stringLiteral53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_68 = GUI_Button_m306(NULL /*static, unused*/, L_65, L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0342;
		}
	}
	{
		GameObject_t4 * L_69 = (__this->___effect10_12);
		Vector3_t10  L_70 = {0};
		Vector3__ctor_m130(&L_70, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_71 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_69, L_70, L_71, /*hidden argument*/NULL);
	}

IL_0342:
	{
		Rect_t82  L_72 = {0};
		Rect__ctor_m134(&L_72, (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_74 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_74, L_73, _stringLiteral54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_75 = GUI_Button_m306(NULL /*static, unused*/, L_72, L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_0391;
		}
	}
	{
		GameObject_t4 * L_76 = (__this->___effect11_13);
		Vector3_t10  L_77 = {0};
		Vector3__ctor_m130(&L_77, (((float)((float)0))), (1.0f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_78 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_76, L_77, L_78, /*hidden argument*/NULL);
	}

IL_0391:
	{
		Rect_t82  L_79 = {0};
		Rect__ctor_m134(&L_79, (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_80 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_81 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_81, L_80, _stringLiteral55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_82 = GUI_Button_m306(NULL /*static, unused*/, L_79, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_03e3;
		}
	}
	{
		GameObject_t4 * L_83 = (__this->___effect12_14);
		Vector3_t10  L_84 = {0};
		Vector3__ctor_m130(&L_84, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_85 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_83, L_84, L_85, /*hidden argument*/NULL);
	}

IL_03e3:
	{
		Rect_t82  L_86 = {0};
		Rect__ctor_m134(&L_86, (((float)((float)((int32_t)160)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_87 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_88 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_88, L_87, _stringLiteral56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_89 = GUI_Button_m306(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0432;
		}
	}
	{
		GameObject_t4 * L_90 = (__this->___effect13_15);
		Vector3_t10  L_91 = {0};
		Vector3__ctor_m130(&L_91, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_92 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_90, L_91, L_92, /*hidden argument*/NULL);
	}

IL_0432:
	{
		Rect_t82  L_93 = {0};
		Rect__ctor_m134(&L_93, (((float)((float)((int32_t)190)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_94 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_95 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_95, L_94, _stringLiteral57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_96 = GUI_Button_m306(NULL /*static, unused*/, L_93, L_95, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_0481;
		}
	}
	{
		GameObject_t4 * L_97 = (__this->___effect14_16);
		Vector3_t10  L_98 = {0};
		Vector3__ctor_m130(&L_98, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_99 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_97, L_98, L_99, /*hidden argument*/NULL);
	}

IL_0481:
	{
		Rect_t82  L_100 = {0};
		Rect__ctor_m134(&L_100, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_101 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_102 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_102, L_101, _stringLiteral58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_103 = GUI_Button_m306(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_04cd;
		}
	}
	{
		GameObject_t4 * L_104 = (__this->___effect15_17);
		Vector3_t10  L_105 = {0};
		Vector3__ctor_m130(&L_105, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_106 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_104, L_105, L_106, /*hidden argument*/NULL);
	}

IL_04cd:
	{
		Rect_t82  L_107 = {0};
		Rect__ctor_m134(&L_107, (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_108 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_109 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_109, L_108, _stringLiteral59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_110 = GUI_Button_m306(NULL /*static, unused*/, L_107, L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_051c;
		}
	}
	{
		GameObject_t4 * L_111 = (__this->___effect16_18);
		Vector3_t10  L_112 = {0};
		Vector3__ctor_m130(&L_112, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_113 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_111, L_112, L_113, /*hidden argument*/NULL);
	}

IL_051c:
	{
		Rect_t82  L_114 = {0};
		Rect__ctor_m134(&L_114, (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_115 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_116 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_116, L_115, _stringLiteral60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_117 = GUI_Button_m306(NULL /*static, unused*/, L_114, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_0568;
		}
	}
	{
		GameObject_t4 * L_118 = (__this->___effect17_19);
		Vector3_t10  L_119 = {0};
		Vector3__ctor_m130(&L_119, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_120 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_118, L_119, L_120, /*hidden argument*/NULL);
	}

IL_0568:
	{
		Rect_t82  L_121 = {0};
		Rect__ctor_m134(&L_121, (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_122 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_123 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_123, L_122, _stringLiteral61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_124 = GUI_Button_m306(NULL /*static, unused*/, L_121, L_123, /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_05b4;
		}
	}
	{
		GameObject_t4 * L_125 = (__this->___effect18_20);
		Vector3_t10  L_126 = {0};
		Vector3__ctor_m130(&L_126, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_127 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_125, L_126, L_127, /*hidden argument*/NULL);
	}

IL_05b4:
	{
		Rect_t82  L_128 = {0};
		Rect__ctor_m134(&L_128, (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_129 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_130 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_130, L_129, _stringLiteral62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_131 = GUI_Button_m306(NULL /*static, unused*/, L_128, L_130, /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_0606;
		}
	}
	{
		GameObject_t4 * L_132 = (__this->___effect19_21);
		Vector3_t10  L_133 = {0};
		Vector3__ctor_m130(&L_133, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_134 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_132, L_133, L_134, /*hidden argument*/NULL);
	}

IL_0606:
	{
		Rect_t82  L_135 = {0};
		Rect__ctor_m134(&L_135, (((float)((float)((int32_t)160)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_136 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_137 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_137, L_136, _stringLiteral63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_138 = GUI_Button_m306(NULL /*static, unused*/, L_135, L_137, /*hidden argument*/NULL);
		if (!L_138)
		{
			goto IL_0655;
		}
	}
	{
		GameObject_t4 * L_139 = (__this->___effect20_22);
		Vector3_t10  L_140 = {0};
		Vector3__ctor_m130(&L_140, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_141 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_139, L_140, L_141, /*hidden argument*/NULL);
	}

IL_0655:
	{
		Rect_t82  L_142 = {0};
		Rect__ctor_m134(&L_142, (((float)((float)((int32_t)190)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_143 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_144 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_144, L_143, _stringLiteral64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_145 = GUI_Button_m306(NULL /*static, unused*/, L_142, L_144, /*hidden argument*/NULL);
		if (!L_145)
		{
			goto IL_06a7;
		}
	}
	{
		GameObject_t4 * L_146 = (__this->___effect21_23);
		Vector3_t10  L_147 = {0};
		Vector3__ctor_m130(&L_147, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_148 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_146, L_147, L_148, /*hidden argument*/NULL);
	}

IL_06a7:
	{
		Rect_t82  L_149 = {0};
		Rect__ctor_m134(&L_149, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_150 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_151 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_151, L_150, _stringLiteral65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_152 = GUI_Button_m306(NULL /*static, unused*/, L_149, L_151, /*hidden argument*/NULL);
		if (!L_152)
		{
			goto IL_06f6;
		}
	}
	{
		GameObject_t4 * L_153 = (__this->___effect22_24);
		Vector3_t10  L_154 = {0};
		Vector3__ctor_m130(&L_154, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_155 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_153, L_154, L_155, /*hidden argument*/NULL);
	}

IL_06f6:
	{
		Rect_t82  L_156 = {0};
		Rect__ctor_m134(&L_156, (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_157 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_158 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_158, L_157, _stringLiteral66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_159 = GUI_Button_m306(NULL /*static, unused*/, L_156, L_158, /*hidden argument*/NULL);
		if (!L_159)
		{
			goto IL_0745;
		}
	}
	{
		GameObject_t4 * L_160 = (__this->___effect23_25);
		Vector3_t10  L_161 = {0};
		Vector3__ctor_m130(&L_161, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_162 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_160, L_161, L_162, /*hidden argument*/NULL);
	}

IL_0745:
	{
		Rect_t82  L_163 = {0};
		Rect__ctor_m134(&L_163, (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_164 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_165 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_165, L_164, _stringLiteral67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_166 = GUI_Button_m306(NULL /*static, unused*/, L_163, L_165, /*hidden argument*/NULL);
		if (!L_166)
		{
			goto IL_0794;
		}
	}
	{
		GameObject_t4 * L_167 = (__this->___effect24_26);
		Vector3_t10  L_168 = {0};
		Vector3__ctor_m130(&L_168, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_169 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_167, L_168, L_169, /*hidden argument*/NULL);
	}

IL_0794:
	{
		Rect_t82  L_170 = {0};
		Rect__ctor_m134(&L_170, (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_171 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_172 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_172, L_171, _stringLiteral68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_173 = GUI_Button_m306(NULL /*static, unused*/, L_170, L_172, /*hidden argument*/NULL);
		if (!L_173)
		{
			goto IL_07e3;
		}
	}
	{
		GameObject_t4 * L_174 = (__this->___effect25_27);
		Vector3_t10  L_175 = {0};
		Vector3__ctor_m130(&L_175, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_176 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_174, L_175, L_176, /*hidden argument*/NULL);
	}

IL_07e3:
	{
		Rect_t82  L_177 = {0};
		Rect__ctor_m134(&L_177, (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_178 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_179 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_179, L_178, _stringLiteral69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_180 = GUI_Button_m306(NULL /*static, unused*/, L_177, L_179, /*hidden argument*/NULL);
		if (!L_180)
		{
			goto IL_0838;
		}
	}
	{
		GameObject_t4 * L_181 = (__this->___effect26_28);
		Vector3_t10  L_182 = {0};
		Vector3__ctor_m130(&L_182, (((float)((float)0))), (1.5f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_183 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_181, L_182, L_183, /*hidden argument*/NULL);
	}

IL_0838:
	{
		Rect_t82  L_184 = {0};
		Rect__ctor_m134(&L_184, (((float)((float)((int32_t)160)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_185 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_186 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_186, L_185, _stringLiteral70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_187 = GUI_Button_m306(NULL /*static, unused*/, L_184, L_186, /*hidden argument*/NULL);
		if (!L_187)
		{
			goto IL_088d;
		}
	}
	{
		GameObject_t4 * L_188 = (__this->___effect27_29);
		Vector3_t10  L_189 = {0};
		Vector3__ctor_m130(&L_189, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_190 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_188, L_189, L_190, /*hidden argument*/NULL);
	}

IL_088d:
	{
		Rect_t82  L_191 = {0};
		Rect__ctor_m134(&L_191, (((float)((float)((int32_t)190)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_192 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_193 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_193, L_192, _stringLiteral71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_194 = GUI_Button_m306(NULL /*static, unused*/, L_191, L_193, /*hidden argument*/NULL);
		if (!L_194)
		{
			goto IL_08e2;
		}
	}
	{
		GameObject_t4 * L_195 = (__this->___effect28_30);
		Vector3_t10  L_196 = {0};
		Vector3__ctor_m130(&L_196, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_197 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_195, L_196, L_197, /*hidden argument*/NULL);
	}

IL_08e2:
	{
		Rect_t82  L_198 = {0};
		Rect__ctor_m134(&L_198, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)160)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_199 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_200 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_200, L_199, _stringLiteral72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_201 = GUI_Button_m306(NULL /*static, unused*/, L_198, L_200, /*hidden argument*/NULL);
		if (!L_201)
		{
			goto IL_0931;
		}
	}
	{
		GameObject_t4 * L_202 = (__this->___effect29_31);
		Vector3_t10  L_203 = {0};
		Vector3__ctor_m130(&L_203, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_204 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_202, L_203, L_204, /*hidden argument*/NULL);
	}

IL_0931:
	{
		Rect_t82  L_205 = {0};
		Rect__ctor_m134(&L_205, (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)160)))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_206 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t132 * L_207 = (GUIContent_t132 *)il2cpp_codegen_object_new (GUIContent_t132_il2cpp_TypeInfo_var);
		GUIContent__ctor_m305(L_207, L_206, _stringLiteral73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		bool L_208 = GUI_Button_m306(NULL /*static, unused*/, L_205, L_207, /*hidden argument*/NULL);
		if (!L_208)
		{
			goto IL_0983;
		}
	}
	{
		GameObject_t4 * L_209 = (__this->___effect30_32);
		Vector3_t10  L_210 = {0};
		Vector3__ctor_m130(&L_210, (((float)((float)0))), (0.1f), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t116  L_211 = Quaternion_Euler_m307(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Object_Instantiate_m308(NULL /*static, unused*/, L_209, L_210, L_211, /*hidden argument*/NULL);
	}

IL_0983:
	{
		int32_t L_212 = Screen_get_height_m133(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t82  L_213 = {0};
		Rect__ctor_m134(&L_213, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)((int32_t)L_212-(int32_t)((int32_t)30)))))), (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t83_il2cpp_TypeInfo_var);
		String_t* L_214 = GUI_get_tooltip_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_Label_m157(NULL /*static, unused*/, L_213, L_214, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleSceneGUI::Main()
extern "C" void SampleSceneGUI_Main_m290 (SampleSceneGUI_t126 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void StopCAM::.ctor()
extern "C" void StopCAM__ctor_m291 (StopCAM_t128 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m123(__this, /*hidden argument*/NULL);
		__this->___myCheck_2 = 1;
		return;
	}
}
// System.Boolean StopCAM::OnMouseDown()
extern const MethodInfo* Component_GetComponent_TisAnimation_t129_m310_MethodInfo_var;
extern "C" bool StopCAM_OnMouseDown_m292 (StopCAM_t128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimation_t129_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		bool L_0 = (__this->___myCheck_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		Animation_t129 * L_1 = (__this->___camAnim_3);
		NullCheck(L_1);
		Animation_t129 * L_2 = Component_GetComponent_TisAnimation_t129_m310(L_1, /*hidden argument*/Component_GetComponent_TisAnimation_t129_m310_MethodInfo_var);
		NullCheck(L_2);
		Animation_Stop_m311(L_2, /*hidden argument*/NULL);
		__this->___myCheck_2 = 0;
		bool L_3 = (__this->___myCheck_2);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_005d;
	}

IL_002e:
	{
		bool L_4 = (__this->___myCheck_2);
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		Animation_t129 * L_5 = (__this->___camAnim_3);
		NullCheck(L_5);
		Animation_t129 * L_6 = Component_GetComponent_TisAnimation_t129_m310(L_5, /*hidden argument*/Component_GetComponent_TisAnimation_t129_m310_MethodInfo_var);
		NullCheck(L_6);
		Animation_Play_m312(L_6, /*hidden argument*/NULL);
		__this->___myCheck_2 = 1;
		bool L_7 = (__this->___myCheck_2);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		return G_B5_0;
	}
}
// System.Void StopCAM::Main()
extern "C" void StopCAM_Main_m293 (StopCAM_t128 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void VisibleBG::.ctor()
extern "C" void VisibleBG__ctor_m294 (VisibleBG_t130 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m123(__this, /*hidden argument*/NULL);
		__this->___myCheck_2 = 1;
		return;
	}
}
// System.Boolean VisibleBG::OnMouseDown()
extern "C" bool VisibleBG_OnMouseDown_m295 (VisibleBG_t130 * __this, const MethodInfo* method)
{
	bool G_B5_0 = false;
	{
		bool L_0 = (__this->___myCheck_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		GameObject_t4 * L_1 = (__this->___BG_3);
		NullCheck(L_1);
		GameObject_SetActive_m313(L_1, 0, /*hidden argument*/NULL);
		__this->___myCheck_2 = 0;
		bool L_2 = (__this->___myCheck_2);
		G_B5_0 = L_2;
		goto IL_004e;
	}

IL_002a:
	{
		bool L_3 = (__this->___myCheck_2);
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		GameObject_t4 * L_4 = (__this->___BG_3);
		NullCheck(L_4);
		GameObject_SetActive_m313(L_4, 1, /*hidden argument*/NULL);
		__this->___myCheck_2 = 1;
	}

IL_0048:
	{
		bool L_5 = (__this->___myCheck_2);
		G_B5_0 = L_5;
	}

IL_004e:
	{
		return G_B5_0;
	}
}
// System.Void VisibleBG::Main()
extern "C" void VisibleBG_Main_m296 (VisibleBG_t130 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
