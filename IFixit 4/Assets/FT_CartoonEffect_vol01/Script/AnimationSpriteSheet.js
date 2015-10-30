#pragma strict

var uvX = 4;  
var uvY = 2; 
var fps = 24.0;
 
function Update () {
 

	var index : int = Time.time * fps;

	index = index % (uvX * uvY);
 

	var size = Vector2 (1.0 / uvX, 1.0 / uvY);

	var uIndex = index % uvX;
	var vIndex = index / uvX;
 	var offset = Vector2 (uIndex * size.x, 1.0 - size.y - vIndex * size.y);
 
	GetComponent.<Renderer>().material.SetTextureOffset ("_MainTex", offset);
	GetComponent.<Renderer>().material.SetTextureScale ("_MainTex", size);
}

