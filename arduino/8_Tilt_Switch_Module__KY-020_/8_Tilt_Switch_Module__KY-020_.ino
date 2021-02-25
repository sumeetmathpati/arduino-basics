/*********************************************************** 
File name:  8 – Tilt Switch Module (KY-020)
Let, tilt warning lamp come with in led build.
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int Led = 13 ;// define LED Interface
int buttonpin = 2; // define the tilt switch sensor interfaces
int val ;// define numeric variables val
void setup ()  {
  pinMode (Led, OUTPUT) ;// define LED as output interface
    pinMode (buttonpin, INPUT) ;//define the output interface tilt switch sensor
}
void loop ()  {
  val = digitalRead (buttonpin) ;// digital interface will be assigned a value of 3 to read val
    if (val == HIGH) //When the tilt sensor detects a signal when the switch, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else  {
    digitalWrite (Led, LOW);
  }
}
