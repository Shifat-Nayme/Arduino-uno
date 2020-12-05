int digit[10][7] ={
                    {1,1,1,1,1,1,0},
                    {0,1,1,0,0,0,0},
                    {1,1,0,1,1,0,1},
                    {1,1,1,1,0,0,1},
                    {0,1,1,0,0,1,1},
                    {1,0,1,1,0,1,1},
                    {1,0,1,1,1,1,1},
                    {1,1,1,0,0,1,0},
                    {1,1,1,1,1,1,1},
                    {1,1,1,1,0,1,1}
                  };
int i,j;

void setup() {
  // put your setup code here, to run once:
  for(i=1; i<=11; i++)
  {
    pinMode(i,OUTPUT);
  }
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  for(i=0; i<=9; i++)
  {
    for(j=0; j<=6; j++)
    {
      digitalWrite(j+1,digit[i][j]);
    }
    delay(200);
  }


  

}
