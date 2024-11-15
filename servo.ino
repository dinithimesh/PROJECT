
#include<Servo.h>

Servo d;



void setup() {
  d.attach(8);


}

void loop() {
  for(int i=0;i<=180;i++)
 {d.write(i);
 delay(10);}
 for(int j=180;j>=0;j--)
 {d.write(j);
 delay(10);}

 
 
 



 
 
  

}
