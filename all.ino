#define trig 2 
#define echo 4
char val;
void setup() {
  for(int i=8;i<12;i++)
  pinMode(i,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(13,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  {digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);}

  long t=pulseIn(echo,HIGH);
  long inches=t/74/2;
  long cm=t/29/2;

  Serial.print(inches);
  Serial.print("in \t");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);

  if(cm>20)
  {digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
}
else
{digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(11,LOW);}

if (Serial.available()){
val= Serial.read();
Serial.println(val);}
if(val=='1')
{digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);}
else if(val=='2')
{digitalWrite(8,LOW);
  digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);}
if(digitalRead(13)==HIGH)
  {digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);}
  else
  {digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);}
}
