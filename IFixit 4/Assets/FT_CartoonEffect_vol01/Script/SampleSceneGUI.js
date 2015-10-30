var mySkin : GUISkin;
var effect01 : GameObject;
var effect02 : GameObject;
var effect03 : GameObject;
var effect04 : GameObject;
var effect05 : GameObject;
var effect06 : GameObject;
var effect07 : GameObject;
var effect08 : GameObject;
var effect09 : GameObject;
var effect10 : GameObject;
var effect11 : GameObject;
var effect12 : GameObject;
var effect13 : GameObject;
var effect14 : GameObject;
var effect15 : GameObject;
var effect16 : GameObject;
var effect17 : GameObject;
var effect18 : GameObject;
var effect19 : GameObject;
var effect20 : GameObject;
var effect21 : GameObject;
var effect22 : GameObject;
var effect23 : GameObject;
var effect24 : GameObject;
var effect25 : GameObject;
var effect26 : GameObject;
var effect27 : GameObject;
var effect28 : GameObject;
var effect29 : GameObject;
var effect30 : GameObject;


function OnGUI ()
{
	GUI.skin = mySkin;
	
	GUI.Label (Rect (70,10,100,20), "FT Cartoon effect volme02");

	if(GUI.Button (Rect (10,40,20,20), GUIContent ("", "Crystal01_5sec")))
	{	Instantiate(effect01, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 1.5, 0));	}
	if(GUI.Button (Rect (40,40,20,20), GUIContent ("", "Crystal02_1shot")))
	{	Instantiate(effect02, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (70,40,20,20), GUIContent ("", "Crystal03_1shot")))
	{	Instantiate(effect03, new Vector3(0, 2.0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (100,40,20,20), GUIContent ("", "DarkBall01_5sec")))
	{	Instantiate(effect04, new Vector3(0, 1.5, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (130,40,20,20), GUIContent ("", "DarkCircle01_5sec")))
	{	Instantiate(effect05, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (160,40,20,20), GUIContent ("", "Explosion01_1shot")))
	{	Instantiate(effect06, new Vector3(0, 0.5, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (190,40,20,20), GUIContent ("", "Explosion02_1shot")))
	{	Instantiate(effect07, new Vector3(0, 0.5, 0), Quaternion.Euler(0, 0, 0));	}
	
	if(GUI.Button (Rect (10,70,20,20), GUIContent ("", "FireBall_5sec")))
	{	Instantiate(effect08, new Vector3(0, 1.5, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (40,70,20,20), GUIContent ("", "FireCircle01_5sec")))
	{	Instantiate(effect09, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (70,70,20,20), GUIContent ("", "Firework01_5sec")))
	{	Instantiate(effect10, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (100,70,20,20), GUIContent ("", "FlameShower01_5sec")))
	{	Instantiate(effect11, new Vector3(0, 1.0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (130,70,20,20), GUIContent ("", "FlashFX01_1shot")))
	{	Instantiate(effect12, new Vector3(0, 1.5, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (160,70,20,20), GUIContent ("", "Ground_Impact01_1shot")))
	{	Instantiate(effect13, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (190,70,20,20), GUIContent ("", "Ground_Impact02_1shot")))
	{	Instantiate(effect14, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}

	if(GUI.Button (Rect (10,100,20,20), GUIContent ("", "Ground_Lava_5sec")))
	{	Instantiate(effect15, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (40,100,20,20), GUIContent ("", "Ground_Sand_5sec")))
	{	Instantiate(effect16, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (70,100,20,20), GUIContent ("", "Ground_Leaf_1shot")))
	{	Instantiate(effect17, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (100,100,20,20), GUIContent ("", "Ground_Poison_5sec")))
	{	Instantiate(effect18, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (130,100,20,20), GUIContent ("", "AuraShot01_1shot")))
	{	Instantiate(effect19, new Vector3(0, 1.5, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (160,100,20,20), GUIContent ("", "Heal01_5sec")))
	{	Instantiate(effect20, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (190,100,20,20), GUIContent ("", "ImpactHit01_1shot")))
	{	Instantiate(effect21, new Vector3(0, 1.5, 0), Quaternion.Euler(0, 0, 0));	}

	if(GUI.Button (Rect (10,130,20,20), GUIContent ("", "LightningCircle01_1shot")))
	{	Instantiate(effect22, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (40,130,20,20), GUIContent ("", "LightningImpact01_1shot")))
	{	Instantiate(effect23, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (70,130,20,20), GUIContent ("", "Meteor01_1shot")))
	{	Instantiate(effect24, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (100,130,20,20), GUIContent ("", "Meteor02_5sec")))
	{	Instantiate(effect25, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (130,130,20,20), GUIContent ("", "RotateAura01_5sec")))
	{	Instantiate(effect26, new Vector3(0, 1.5, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (160,130,20,20), GUIContent ("", "RotateAura02_1shot")))
	{	Instantiate(effect27, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (190,130,20,20), GUIContent ("", "RotateAura03_3sec")))
	{	Instantiate(effect28, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 0, 0));	}
	
	if(GUI.Button (Rect (10,160,20,20), GUIContent ("", "Tornedo_Leaf_5sec")))
	{	Instantiate(effect29, new Vector3(0, 0, 0), Quaternion.Euler(0, 0, 0));	}
	if(GUI.Button (Rect (40,160,20,20), GUIContent ("", "WindImpact01_5sec")))
	{	Instantiate(effect30, new Vector3(0, 0.1, 0), Quaternion.Euler(0, 0, 0));	}
	
	
	GUI.Label (Rect (10,Screen.height-30,200,20), GUI.tooltip);
}