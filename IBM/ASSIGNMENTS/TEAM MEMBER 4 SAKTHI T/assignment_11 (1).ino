void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int a=analogRead(A1);				//LDR
  int m=map(a,3,405,0,255);
  double p=digitalRead(12);
  Serial.println(m);
  if(m<=150 && p==1){
    digitalWrite(13,HIGH);
    tone(11,2000);
    delay(10000);
    noTone(11);
    delay(1000);
    }
  else if(m>=150 && p==1){
    tone(11,2000);
    delay(10000);
    noTone(11);
    delay(1000);
  }
  else{
    digitalWrite(13,LOW);
  }
  Serial.println(p);
}
