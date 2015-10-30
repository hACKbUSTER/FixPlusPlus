using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour {

	public Vector3 RotateVector;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate ()
	{
		transform.Rotate(RotateVector);
	}
}
