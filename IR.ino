void setup() {
 pinMode(7,INPUT);
 pinMode(8,OUTPUT);//BLUE
 pinMode(12,OUTPUT);
}

void loop() {
  if(digitalRead(7)==HIGH)
  {digitalWrite(12,HIGH);
  digitalWrite(8,LOW);}
  else
  {digitalWrite(8,HIGH);
  digitalWrite(12,LOW);}

}
