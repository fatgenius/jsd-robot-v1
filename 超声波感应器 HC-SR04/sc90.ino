/* This is the servo part 
--- Author: Butian Du
--- Time: 10/26/2018
--- project: robot for cutting grass 
--- Arduino part for the robort
--- this part is combined of the moduel sc-90 and sg90 part  
--- using the servo.h library 
*/
#include <Servo.h>

int trigPin = 10;
int echoPin = 11;

long duration; // this is the duration time 
int distinCM;  // this is the ressult of the distance 

Servo radarServo; // invoke the Servo library 

/*
 *  The serial port we use the serial port 9600
 *  The sc90 mouduel are including the triger pin  and the echo pin  
 *  The  
 * 
 * 
 */
void setup() 
{
  pinMode(trigPin, OUTPUT); //
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  radarServo.attach(9);
}
void loop() 
{
  for(int i=0;i<=180;i++)
  {
    radarServo.write(i);
    delay(50);
    
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distinCM = duration*0.034/2;
    
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
    Serial.println();
  }
  
  for(int i=180;i>=0;i--)
  {
    radarServo.write(i);
    delay(50);
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distinCM = duration*0.034/2;
    
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
    Serial.println();
  }
}
