/*********************************************************** 
File name: 29 – Metal touch sensor module(KY-036)
Let, Arduino KY-036 Metal touch sensor module.
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int touchPin = A0;
int sensorValue = 0;
 
void setup () 
{
  Serial.begin (9600);
}
 
void loop () 
{
  sensorValue = analogRead (touchPin);
  Serial.println (sensorValue, DEC);
  delay (1000);
}
