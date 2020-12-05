#include<Wire.h>
#include<RTClib.h>

RTC_DS1307 rtc;
int min=0;
int target=33;
int buzzer =3;
void setup() {
  rtc.begin();
  //rtc.adjust(DateTime(F(__DATE__),F(__TIME__)));
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  DateTime present = rtc.now();
  min = present.minute();
  Serial.print(present.hour());
  Serial.print(":");
  Serial.print(present.minute());
  Serial.print(":");
  Serial.println(present.second());
  
  if(min==target)
  {
    digitalWrite(buzzer,HIGH);
    delay(4000);
    
    digitalWrite(buzzer,LOW);
    target++;
  }
  if(target==60)
  {
    target=0;
  }
  delay(500);
  
}
