/*********************************************************** 
File name:  12 – Vibration Switch Module (KY-002)
Let, When the switch detects a jolt, the output of the module is sent low. 
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int Led = 13 ;// define LED Interface  
int Shock = 2; // define the vibration sensor interface
int val; // define numeric variables val
void setup ()  {
  pinMode (Led, OUTPUT) ; // define LED as output interface
  pinMode (Shock, INPUT) ; // output interface defines vibration sensor
}
void loop ()  {
  val = digitalRead (Shock) ;       // read digital interface is assigned a value of 3 val
  if (val == LOW)                        // When the shock sensor detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH); //Turn LED on
    delay(1000); //Hold LED in on state for one second
  }
  else  {
    digitalWrite (Led, LOW);   //Turn off LED
}
 }
