/* This is the servo part 
--- Author: Butian Du
--- Time: 10/26/2018
--- project: robot for cutting grass 
--- Servo part for the robort 
--- using the servo.h library 
*/

#include  <Servo.h>

Servo jsd_servo; //create an object for servo object
int pos = 0;

void setup() {
  jsd_servo.attach(9);//
}

void loop() {
  for(int pos =0; pos<=180; pos++)
    {
      jsd_servo.write(pos);
      delay(10);
    }

   for(int pos= 180; pos>=0; pos--)
    {
      jsd_servo.write(pos);
      delay(10);
    }
}
