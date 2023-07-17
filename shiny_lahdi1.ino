
int SS1=2; // SlidSwitch
int SS2=3; // SlidSwitch
int R=0;// Reading
int C=0;// Counter
int I=0;// Intensity
int L1=5;
int L2=6;
int L3=7;
int L4=8;
  void setup()
{
  
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(SS1, INPUT);
  pinMode(SS2, INPUT);
    
}

void loop()
{
  
   if (SS1==HIGH)
  {
    R=digitalRead;
    if (R==HIGH)
    {
   C++;
  digitalWrite(8, HIGH);
  for (I=0;I<=128;I++)
  {analogWrite(5,HIGH);}
   while (SS1==HIGH);
  }
   }
  else
  {
    digitalWrite(8, LOW);
  for (I=128;I<=0;I++)
  {analogWrite(2,LOW);}
   while (SS1==LOW);
   C=0;
  }
   if (SS2==HIGH)
  {
     R=digitalRead;
     if (R==HIGH)
     {
   C++;
  digitalWrite(7, HIGH);
  for (I=0;I<=128;I++)
  {analogWrite(6,HIGH);}
   while (SS2==HIGH);
  }
   }
  else
  {
    digitalWrite(7, LOW);
  for (I=128;I<=0;I++)
  {analogWrite(6,LOW);}
   while (SS2==LOW);
   C=0;
  }
}