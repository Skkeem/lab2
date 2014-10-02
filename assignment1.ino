#include <Servo.h>

Servo servoRight;
Servo servoLeft;
int rLed = 11;
int gLed = 10;
int rState = HIGH;
int gState = LOW;

void setup() {         
//  servoRight.attach(12);
//  servoLeft.attach(13);
  pinMode(rLed, OUTPUT);     
  pinMode(gLed, OUTPUT);
  digitalWrite(rLed, rState);
  digitalWrite(gLed, gState);
//  servoRight.writeMicroseconds(1500);  
}

// the loop routine runs over and over again forever:
void loop() {
  delay(1000);

  digitalWrite(rLed, rState = !rState);
  digitalWrite(gLed, gState = !gState);
//  servoRight.writeMicroseconds(1500);  

//  servoRight.writeMicroseconds(1300);  
}
