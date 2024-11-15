#define trig 2
#define echo 4

void setup() {
 for(int i=5;i<10;i++)
 pinMode(i,OUTPUT);
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 
 Serial.begin(9600);
}

void loop() {
  {digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  }
  long t=pulseIn(echo,HIGH);
  long inches=t/74/2;
  long cm =t/29/2;

   Serial.print (inches);
  Serial.print("in \t");
  Serial.print(cm);
  Serial.println("cm");
  delay(1000);

  if (cm<20)
  for(int i=5;i<10;i++)
  {digitalWrite(i,HIGH);
  delay(20);
  digitalWrite(i+1,HIGH);
  delay(20);
  digitalWrite(i+2,HIGH);
  delay(20);
  digitalWrite(i,LOW);
  delay(20);
  digitalWrite(i+1,LOW);
  delay(20);}

  else
  for(int i=11;i>4;i--)
  {digitalWrite(i,HIGH);
  delay(20);
  digitalWrite(i-1,HIGH);
  delay(20);
  digitalWrite(i-2,HIGH);
  delay(20);
  digitalWrite(i,LOW);
  delay(20);
  digitalWrite(i-1,LOW);
  delay(20);}

  

}
