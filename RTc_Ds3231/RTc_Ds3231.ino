#include<Wire.h>
#include<RTClib.h>

RTC_DS1307 rtc;

String dayofweek[]={"Sunday","Monday","Tuesday","Wednessday","Thirsday","Friday","Saturday"};

void setup() {
  rtc.begin();
  Serial.begin(9600);
  //rtc.adjust(DateTime(F(__DATE__),F(__TIME__)));
}

void loop() {
  DateTime present = rtc.now();
  Serial.print("Date: ");
  Serial.print(present.day());
  Serial.print("/");
  Serial.print(present.month());
  Serial.print("/");
  Serial.print(present.year());
  Serial.print("      ");

  Serial.print("Time: ");

  Serial.print(present.hour());
  Serial.print(":");
  Serial.print(present.minute());
  Serial.print(":");
  Serial.print(present.second());
  Serial.print("    DayOfTheWeek: ");
  Serial.println(dayofweek[present.dayOfTheWeek()]);
  
  delay(1000);

}
