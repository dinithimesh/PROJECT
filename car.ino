
 
 char t;
 

void setup() {
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

Serial.begin(9600);}

void loop() {
  
  
  if(Serial.available())
  {t=Serial.read();
  Serial.println(t);
  }
  
  

 else if(t=='1')
  {digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);}
  else if(t=='2')
  {digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);}
  else if(t=='3')
  {digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);}
  else if(t=='4')
  {digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);}
  else if(t=='0')
  {digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);}
  
  
  
delay(100);
}
