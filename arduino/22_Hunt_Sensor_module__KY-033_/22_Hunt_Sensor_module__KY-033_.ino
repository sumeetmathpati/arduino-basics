/*********************************************************** 
File name: 22 - Hunt Sensor module (KY-033)
Let, Arduino KY-033 Hunt sensor Module.
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/

int led = 13;  //LED pin
int sensor = 3; //sensor pin
int val; //numeric variable 
void setup()   { 
  pinMode(led, OUTPUT); //set LED pin as output
  pinMode(sensor, INPUT); //set sensor pin as input
 } 
void loop()   { 
   val = digitalRead(sensor); //Read the sensor 
    if(val == HIGH) { digitalWrite(led, HIGH); }
    else { digitalWrite(led, LOW); }
 }
