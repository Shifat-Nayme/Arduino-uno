#include<Servo.h>
Servo myservo;

void setup()
{
  myservo.attach(3);
}

void loop()
{
  myservo.write(0);
  delay(2000);
  myservo.write(90);
  delay(2000);
  myservo.write(180);
  delay(2000);
  for(int i=10; i<180; i++)
  {
   myservo.write(i);
   delay(200);
  }
}
