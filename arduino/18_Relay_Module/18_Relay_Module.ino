/*********************************************************** 
File name:   18 Relay Module
Let, Relay use. 
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int relayPin = 6;
void setup()   { 
  pinMode(relayPin, OUTPUT);
} 
 void loop()  { 
digitalWrite(relayPin, LOW); // turn the relay on (Active LOW operation)
delay(2000); // wait for a second
digitalWrite(relayPin, HIGH); // turn the relay off by making the voltage HIGH
delay(2000); // wait for a second
}
