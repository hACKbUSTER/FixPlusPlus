#pragma strict

var Speed = 0.25;
function FixedUpdate()
{
var offset = Time.time * (-Speed);
GetComponent.<Renderer>().material.mainTextureOffset = Vector2 (0,offset);
}
