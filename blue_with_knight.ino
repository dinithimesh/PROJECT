int val;


void setup() {
  pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
     pinMode(10,OUTPUT);
      pinMode(11,OUTPUT);
       pinMode(12,OUTPUT);
       pinMode(13,OUTPUT);
  
}

void loop() {
  if (Serial.available())
  {val=Serial.read();}

  else if(val=1)
  for(int i;i+1;i++);
  
 { digitalWrite(i,HIGH);
 delay(100);
 digitalWrite(i+1,HIGH);
 delay(100);
 digitalWrite(i+2,HIGH);
 delay(100);
 digitalWrite(i,LOW);
 delay(100);
 digitalWrite(i+1,LOW);
 delay(100);}
 else(val=0);
 for(int i;i-1;i--);
 { digitalWrite(i,HIGH);
 delay(100);
 digitalWrite(i-1,HIGH);
 delay(100);
 digitalWrite(i-2,HIGH);
 delay(100);
 digitalWrite(i,LOW);
 delay(100);
 digitalWrite(i-1,LOW);
 delay(100);}
 
 
  
}
