//reading data from the Raspberry Pi
void readSerial() {
  int i = 0;
  while (Serial.available()) {
    char inChar = (char)Serial.read(); 
    // add incoming bytes to the inputString:
    inputString += inChar;
    i++;
    // if the incoming character is a newline, set a flag and break serial reading
    if (inChar == '\n' || i == 18) {
      checkColor(); //checks if a consistent string was received
      i = 0;
      break;
    }
  }
}

void checkColor(){ //check if the string begins with "ia" and ends with "e"
  //Serial.print("Check incoming data:\n");
  if (inputString.charAt(0) == 'R' && 
    inputString.charAt(1) == 'P' &&
    inputString.charAt(2) == 'i' &&
    inputString.charAt(15) == 'e' && 
    inputString.length() == 17
    ) {
      inputStringComplete = true;
      //Serial.print("OKcolor\n"); //send OK message to RPi
  } 
  /*else if (inputString.charAt(0) == 'R' && 
    inputString.charAt(1) == 'P' &&
    inputString.charAt(2) == 'i' &&
    inputString.charAt(6) == 'e' && 
    inputString.length() == 8
    ) {
      inputStringComplete = false;
      Serial.print("OKreq"); //send OK message to RPi
      Serial.print(checkSetColor(preRed));
      Serial.print(checkSetColor(preGreen));
      Serial.print(checkSetColor(preBlue));
      Serial.print("e\n"); //send colors to RPi
      inputString = args[0];
  } */
  else {
    //Serial.println(inputString);
    inputStringComplete = false;
    //printDln("InputString not OK, ERROR!");
    Serial.print("RETRY\n"); //Send an error string to RPi, let RPi retry to send the last string
    inputString = args[0];
  }
}

//Convert the integer color value to a string and make sure it has a length of three
/*String checkSetColor(int setColor){
  String color = String(setColor);  //Convert the integer to a string

  while (color.length() < 3){       //While the length is shorther then 3
    color = String("0"+ color);     //Add a zero to the start
  }
  return color;                     //Return the string
}*/


