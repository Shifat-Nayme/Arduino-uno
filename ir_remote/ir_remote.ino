#include <IRremote.h>
int reciever =3;
int led1 =6;
int led2=7;

int state1=1;
int state2=1;

IRrecv irrecv(reciever);
decode_results(results);

void setup() {

  Serial.begin(9600);
  irrecv.enableIRIn();
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  if(irrecv.decode(&results))
  {
    Serial.println(results.value, HEX); //print decode value
    irrecv.resume();

    if(results.value==0xDA28F020)
    {
      digitalWrite(led1, state1);
       state1= !state1;
    }
     if(results.value==0xDCB93B93)
    {
      digitalWrite(led2, state2);
       state2= !state2;
    }
  }
  delay(100);

}
