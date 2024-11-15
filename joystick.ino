
int X=A0;
int Y=A1;



void setup() {
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(5,HIGH);
   Serial.print("Switch   ");
   Serial.println(digitalRead(5));
   Serial.print("X axis");
   Serial.print("\t");
   Serial.println(analogRead(X));
   Serial.print("Y axis");
   Serial.print("\t");
   Serial.println(analogRead(Y));
   delay(1000);
  

}   
