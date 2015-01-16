/***********************************************************
Beginning of a basic program that reads from the serial port
and returns a messages to the RPi
***********************************************************/
#include <SoftwareSerial.h>

//Define the required variables
boolean debugLocal = true;
int preNumber = 000;
int preRed = 000;
int preGreen = 000;
int preBlue = 000;

//Set the three LED pins
	int ledPinR = 9;
	int ledPinG = 10;
	int ledPinB = 11;
	
	//readSerial variables
	const String args[0];
	String inputString = args[0]; //serial input
	boolean inputStringComplete = false; 

	
void setup(){
	//Open the serial connection to the Raspberry Pi and set the Baud rate
	Serial.begin(9600);
    //Serial.println("opening serial"); // Print the line "opening serial" to the serial monitor for testing purposes

	// initialize the digital pin as an output.
	pinMode(ledPinR, OUTPUT);
	pinMode(ledPinG, OUTPUT);  
	pinMode(ledPinB, OUTPUT);
}

void loop(){
	readSerial();
	if (inputStringComplete){
		lightControl();
		inputString = args[0];
		inputStringComplete = false;
	} 
	
}
