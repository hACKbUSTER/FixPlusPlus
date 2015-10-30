using UnityEngine;
using System.Collections;

public class CameraBehavior : MonoBehaviour {
	
	public int AllStepsNum;
	int NowStepNum;
	public Texture2D BackPic,NextPic,BeginPic,EndPic,IFixitPic;
	GameObject[] StepZeroArrows,StepOneArrows,StepTwoArrows;
	
	void Start () {
		AllStepsNum = 6;
		NowStepNum = 0;
	}
	
	// Update is called once per frame
	void Update () {
		for (int i = 1; i <= AllStepsNum; i++) {
			if (NowStepNum + 1 != i)
			{
				removeStepObjects(i-1);
			}
		}
	}
	
	void removeStepObjects(int NowStepNum)
	{
		GameObject[] objects = GameObject.FindGameObjectsWithTag ("step" + (NowStepNum+1).ToString());
		foreach (GameObject obj in objects)
		{
			Renderer[] childRenderer = obj.GetComponentsInChildren<Renderer>();
			foreach (Renderer renderer in childRenderer)
			{
				renderer.enabled = false;
			}
		}
	}
	
	void showStepObjects(int NowStepNum)
	{
		GameObject[] objects = GameObject.FindGameObjectsWithTag ("step" + (NowStepNum+1).ToString());
		foreach (GameObject obj in objects)
		{
			Renderer[] childRenderer = obj.GetComponentsInChildren<Renderer>();
			foreach (Renderer renderer in childRenderer)
			{
				renderer.enabled = true;
			}
		}
	}
	
	bool hasShownObjects()
	{
		bool flag = false;
		for (int i = 1; i <= AllStepsNum; i++) {
			GameObject[] objects = GameObject.FindGameObjectsWithTag("step" + i.ToString());
			foreach (GameObject obj in objects)
			{
				Renderer[] childRenderer = obj.GetComponentsInChildren<Renderer>();
				foreach (Renderer renderer in childRenderer)
				{
					if (renderer.enabled)
					{
						flag = true;
					}
				}
			}
		}
		return flag;
	}
	
	void OnGUI() 
	{
		GUI.Box(new Rect(0,0,Screen.height/9*4,Screen.height/6), IFixitPic);
		
		if(NowStepNum == 0)
		{
			
			if(GUI.Button(new Rect(0, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), BeginPic)) 
			{
				
			}
			if(GUI.Button(new Rect(Screen.width-Screen.height/4, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), NextPic)) 
			{
				if (hasShownObjects())
				{
					removeStepObjects(NowStepNum);
					NowStepNum++;
					showStepObjects(NowStepNum);
				}
			}
		}
		else if (NowStepNum == AllStepsNum - 1)
		{
			
			if(GUI.Button(new Rect(0, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), BackPic)) 
			{
				if (hasShownObjects())
				{
					removeStepObjects(NowStepNum);
					NowStepNum--;
					showStepObjects(NowStepNum);
				}
			}
			if(GUI.Button(new Rect(Screen.width-Screen.height/4, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), EndPic)) 
			{
				
			}
		}
		else
		{
			
			if(GUI.Button(new Rect(0, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), BackPic)) 
			{
				if (hasShownObjects())
				{
					removeStepObjects(NowStepNum);
					NowStepNum--;
					showStepObjects(NowStepNum);
				}
			}
			if(GUI.Button(new Rect(Screen.width-Screen.height/4, Screen.height-Screen.height/4, Screen.height/4,Screen.height/4), NextPic)) 
			{
				if (hasShownObjects())
				{
					removeStepObjects(NowStepNum);
					NowStepNum++;
					showStepObjects(NowStepNum);
				}
			}
		}
	}
	
}

