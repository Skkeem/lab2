#include <Servo.h>

Servo servoRight;         /* Declare right servo */
Servo servoLeft;          /* Declare left servo */

void setup()
{
  /* attach pins to servos */
  servoRight.attach(12);
  servoLeft.attach(13);
  
  /* Go straight. 2 sec */
  servoRight.writeMicroseconds(1300); 
  servoLeft.writeMicroseconds(1700); 
  delay(2000);
  /* Stop. 1 sec */
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1500);
  delay(1000);

  /* Turn right. */
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1700);
  delay(700);
  /* Stop. 1 sec */
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1500);
  delay(1000);

  /* Go straight. 2 sec*/
  servoRight.writeMicroseconds(1300);
  servoLeft.writeMicroseconds(1700);
  delay(2000);
  /* Stop. 1 sec */
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1500);
  delay(1000);

  /* Turn left. */
  servoRight.writeMicroseconds(1300);
  servoLeft.writeMicroseconds(1300);
  delay(700);
  /* Stop. 1 sec */
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1500);
  delay(1000);

  /* Go backward. 2 sec*/
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1300);
  delay(2000);
  /* Stop.*/
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1500);
}  
 
void loop()
{
}
