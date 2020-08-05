#include <motor_control.h>

void setup() {
  // put your setup code here, to run once:
   motor_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  
raw_motor_control(100*1.1275,100);
  
//200 factor= 1.135 | 100 factor = 1.12  ||  avg is 1.1275    (for parameters)
//minimum power to run motors out of 255 = 50(with force) 95(by itself)
}
