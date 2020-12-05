unsigned long cur_time1=0;
unsigned long cur_time2=0;
unsigned long pre_time1=0;
unsigned long pre_time2=0;
bool state1 = 0;
bool state2 = 0;


void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  cur_time1 = millis();
  cur_time2 = millis();
  if(cur_time1-pre_time1 >400)
  {
     digitalWrite(3,state1); 
     state1 = !state1;
     pre_time1 = cur_time1;
    
  }
  if(cur_time1-pre_time2 >500)
  {
     digitalWrite(5,state1); 
     state2 = !state2;
     pre_time2 = cur_time1;
    
  }
  
}
