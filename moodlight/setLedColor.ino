//set RGB led to given colors
void setLedColor(int red, int green, int blue)
{  
analogWrite(ledPinR,red);
analogWrite(ledPinG,green);
analogWrite(ledPinB,blue);
preRed = red;
preGreen = green;
preBlue = blue;
}




