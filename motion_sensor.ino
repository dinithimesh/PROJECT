void setup() {
  pinMode(9,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  int val=digitalRead(9);
    if (val == 1)
  {digitalWrite(13,HIGH);}
  else
  {digitalWrite(13,LOW);}
  

}
