struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 65 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//21. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//25. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//26. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//27. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//28. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//29. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//30. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//31. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//32. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//33. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//34. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//35. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//36. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//37. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//41. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//42. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//43. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//44. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//45. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//46. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//47. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//48. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//49. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//50. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//51. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//52. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//53. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//54. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//55. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//56. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//57. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//58. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//59. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//60. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//61. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//62. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//63. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//64. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
