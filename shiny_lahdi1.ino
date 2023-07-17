
int SS1=2; // SlidSwitch
int SS2=3; // SlidSwitch
int R=0;// Reading

int I=0;// Intensity
int L1=5;
int L2=6;
int L3=7;
int L4=8;
int L5=9;
int L6=10;
  void setup()
{
  
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(SS1, INPUT);
  pinMode(SS2, INPUT);
    
}

void loop()
{
  R=digitalRead(SS1);
   if (R==HIGH)
  {
   
  digitalWrite(8, HIGH);
  for (I=0;I<=128;I++)
  {analogWrite(5,HIGH);}
   
  }
   
  else
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  for (I=128;I>=0;I++)
  {analogWrite(5,LOW);}
   while (SS1==LOW);
   
  }
  R=digitalRead(SS2);
   if (R==HIGH)
   {
  digitalWrite(7, HIGH);
  for (I=0;I<=128;I++)
  {analogWrite(6,HIGH);}
  
  }
   
  else
  {
    digitalWrite(7, LOW);
    digitalWrite(10, LOW);
  for (I=128;I>=0;I++)
  {analogWrite(6,LOW);}
   while (SS2==LOW);
  
  }
}