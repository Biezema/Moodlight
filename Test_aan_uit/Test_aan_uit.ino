/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int RED = 9;
int GREEN = 10;
int BLUE = 11;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);  
  pinMode(BLUE, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
//  analogWrite(RED, 0);
//  analogWrite(GREEN, 0);
//  analogWrite(BLUE, 0);

  analogWrite(RED,255);
  delay(5000);

 /* analogWrite(RED, 0);
  delay(250);

  analogWrite(GREEN, 255);
  delay(1000);

  analogWrite(GREEN, 0);
  delay(250);

  analogWrite(BLUE, 255);
  delay(500);

  analogWrite(BLUE, 125);
  delay(500);

  analogWrite(BLUE, 65);
  delay(500);

  analogWrite(BLUE, 0);
  delay(500);

  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(250);
  
  */
}
