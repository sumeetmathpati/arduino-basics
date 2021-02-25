/*********************************************************** 
File name:  6 - Laser Module 650NM 
Let, Laser module interface with arduino. 
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int laserPin = 13;
void setup() {              pinMode(laserPin, OUTPUT);  // Define the digital output interface pin 13 
}
void loop() {
  digitalWrite(laserPin, HIGH); // Open the laser head
  delay(1000); // Delay one second
  digitalWrite(laserPin, LOW); // Close the laser head
  delay(1000); 
}                                                                      
