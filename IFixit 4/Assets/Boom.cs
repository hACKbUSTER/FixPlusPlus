using UnityEngine;
using System.Collections;

public class Boom : MonoBehaviour {

	float hSliderValue = 0.0f;
	public float MaxBoom;
	public Texture2D BeginPic,IFixitPic;

	GameObject AppleLogo,ScreenBoard,Keyboard,Unibody,TouchPad,KeyboardBottom,BottomDown,Bottom,Macbook,Top;
	GameObject Battery,HDD,DVD,CPU,Fan,Fan0;
	Component[] LaptopComponents;
	float BoomArgu;

	// Use this for initialization
	void Start () {
		AppleLogo = GameObject.Find("Apple");
		ScreenBoard = GameObject.Find("Screen");
		Keyboard = GameObject.Find("Keyboard");
		Unibody = GameObject.Find("Unibody");
		TouchPad = GameObject.Find("TouchPad");
		KeyboardBottom = GameObject.Find("KeyboardBottom");
		BottomDown = GameObject.Find("BottomDown");
		Bottom = GameObject.Find("Bottom");
		Macbook = GameObject.Find("Macbook");

		Battery = GameObject.Find("Battery");
		HDD = GameObject.Find("HDD");
		DVD = GameObject.Find("DVD");
		CPU = GameObject.Find("CPU");
		Fan = GameObject.Find("Fan");
		Fan0 = GameObject.Find("Fan0");


		if (Macbook != null)
		{
			print("GetMacBook");
		}else print("Can't Get Macbook");
		Top = GameObject.Find("Top");

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate ()
	{
		foreach (Transform child in transform)
		{
			switch (child.name)
			{
			case "Battery": BoomArgu = 0.2f;break;
			case "HDD": BoomArgu = 0.35f;break;
			case "DVD": BoomArgu = 0.3f;break;
			case "CPU": BoomArgu = 0.45f;break;
			case "Fan": BoomArgu = 0.55f;break;
			case "BottomDown": BoomArgu = 0.0f;break;
			case "Bottom": BoomArgu = 0.0f;break;
			case "Unibody": BoomArgu = 0.1f;break;
			case "KeyboardBottom": BoomArgu = 0.4f;break;
			case "Keyboard": BoomArgu = 0.7f;break;
			case "TouchPad": BoomArgu = 0.5f;break;
			case "Top": BoomArgu = 1.0f;break;
			case "Fan0": BoomArgu = 0.6f;break;
			default : BoomArgu = 0.0f;break;
			}
			child.transform.localPosition = new Vector3(0,hSliderValue*BoomArgu,0);
		}
	}

	void OnGUI ()
	{

		hSliderValue = GUI.VerticalSlider(new Rect(Screen.width-100,20,90,Screen.height-40), hSliderValue, MaxBoom, 0.0f);

		if(GUI.Button(new Rect(0, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), BeginPic)) 
		{
			//GameObject ARCamera = GameObject.Find("ARCamera");
			//Destroy(ARCamera);
			Application.LoadLevel("InFixScene");
		}

		GUI.Box(new Rect(0,0,Screen.height/9*4,Screen.height/6), IFixitPic);


	}
}
