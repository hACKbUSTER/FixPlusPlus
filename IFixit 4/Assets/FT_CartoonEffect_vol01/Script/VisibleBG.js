var myCheck : boolean = true;
var BG : GameObject;

function OnMouseDown () {
	if(myCheck == true){
	BG.SetActive(false); 
	myCheck = false;
	return myCheck;}
	if(myCheck == false){
	BG.SetActive(true);
	myCheck = true; }
	return myCheck;}
