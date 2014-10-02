#include <Servo.h>                           // Include servo library
 
Servo servoRight;                            // Declare right servo
Servo servoLeft;                            // Declare right servo

void setup()                                 // Built-in initialization block
{
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.attach(13);                     // Attach right signal to pin 12
  servoRight.writeMicroseconds(1300);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1700);        // 1.5 ms stay still signal
  delay(2000);
  servoRight.writeMicroseconds(1500);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1500);        // 1.5 ms stay still signal
  delay(1000);

  servoRight.writeMicroseconds(1700);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1700);        // 1.5 ms stay still signal
  delay(700);
  servoRight.writeMicroseconds(1500);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1500);        // 1.5 ms stay still signal
  delay(1000);

  servoRight.writeMicroseconds(1300);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1700);        // 1.5 ms stay still signal
  delay(2000);
  servoRight.writeMicroseconds(1500);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1500);        // 1.5 ms stay still signal
  delay(1000);

  servoRight.writeMicroseconds(1300);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1300);        // 1.5 ms stay still signal
  delay(700);
  servoRight.writeMicroseconds(1500);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1500);        // 1.5 ms stay still signal
  delay(1000);

  servoRight.writeMicroseconds(1700);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1300);        // 1.5 ms stay still signal
  delay(2000);
  servoRight.writeMicroseconds(1500);        // 1.5 ms stay still signal
  servoLeft.writeMicroseconds(1500);        // 1.5 ms stay still signal

}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}
