void lightControl (){
	//Getting the relevant data from the string send over Serial
	String strNumber = (inputString.substring(3,6));
	String strRed = (inputString.substring(6,9));
	String strGreen = (inputString.substring(9,12));
	String strBlue = (inputString.substring(12,15));

	int number = strNumber.toInt();
	int red = strRed.toInt();
	int green = strGreen.toInt();
	int blue = strBlue.toInt();

	if (number == 000 || preNumber < number){
		setLedColor(red,green,blue);
		preNumber = number;
	} 
	
}