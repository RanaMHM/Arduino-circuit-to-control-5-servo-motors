// C++ code
#include <Servo.h>

Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;



void setup() {
  servo1.attach(3);
  servo2.attach(5); 
  servo3.attach(6); 
  servo4.attach(9);
   servo5.attach(10); 
}

void loop() {
 
    servo1.write(90);              
    servo2.write(90);     
    servo3.write(90);
    servo4.write(90);
    servo5.write(90); 
    delay(10);                      
  
  

}