#define trig 5
#define echo 7
char t;

void setup() {
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(20);
  digitalWrite(trig, LOW);

  float p = pulseIn(echo, HIGH);
  float cm = p / 29 / 2;

  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println("cm | ");

  if (cm < 20) {
    
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(6, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(8, LOW);
 
  } else {
    digitalWrite(9,LOW);
    digitalWrite(13,LOW);
    digitalWrite(10,LOW);
    if (Serial.available()) {
      t = Serial.read();
      Serial.println(t);
    }

    if (t == '1') {
      analogWrite(6, 150);
      analogWrite(10, 150);
      digitalWrite(4, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(2, LOW);
    } else if (t == '2') {
      analogWrite(9, 150);
      analogWrite(11, 150);
      digitalWrite(6, LOW);
      digitalWrite(10, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    } else if (t == '3') {
      analogWrite(6, 150);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    } else if (t == '4') {
      digitalWrite(9, LOW);
      digitalWrite(6, LOW);
      analogWrite(10, 150);
      digitalWrite(11, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    } else if (t == '0') {
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(9, LOW);
    } else if (t == '6') {
      digitalWrite(13, HIGH);
      digitalWrite(8, LOW);
    } else if (t == 'o') {
      digitalWrite(13, LOW);
    }
  }

  delay(100);
}
