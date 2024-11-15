#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[]="m7jLVaXTYGpS_hSw10VmdC2d4k74qZYo";
char ssid[] = "DinithImesh";       
char pass[] = "dinith2001";
BLYNK_WRITE(V0){
  int pinValue=param.asInt();
  digitalWrite(23,pinValue);
}
BLYNK_WRITE(V1){
  int pinValue=param.asInt();
  digitalWrite(32,pinValue);
}
BLYNK_WRITE(V2){
  int pinValue=param.asInt();
  digitalWrite(33,pinValue);
}
BLYNK_WRITE(V3){
  int pinValue=param.asInt();
  digitalWrite(33,pinValue);
  digitalWrite(23,pinValue);
  digitalWrite(32,pinValue);
}
void setup() {
  
  Serial.begin(115200);
  pinMode(1,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  digitalWrite(23,LOW);
  digitalWrite(32,LOW);
  digitalWrite(33,LOW);

Blynk.begin(auth,ssid,pass,"blynk.cloud",80); 
while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi");
}

void loop() {
  
Blynk.run();
if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(1, HIGH); 
    Serial.println("Wi-Fi Status: Connected");
  } else {
    digitalWrite(1, LOW); 
    Serial.println("Wi-Fi Status: Not connected");
  }

  delay(2000); 
}
