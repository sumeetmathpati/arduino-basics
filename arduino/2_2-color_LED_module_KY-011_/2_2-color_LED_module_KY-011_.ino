/*********************************************************** 
File name:  2_2-color LED module(KY-011)
Let, You can adjust the amount of each color using PWM.
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int redpin = 11; // select the pin for the red LED
int greenpin = 10; // select the pin for the green LED
int val;
void setup () {
   pinMode (redpin, OUTPUT);
   pinMode (greenpin, OUTPUT);
}
void loop () {
   for (val = 255; val > 0; val--)
      {
      analogWrite (greenpin, val);
      analogWrite (redpin, 255-val);
      delay (15);
   }
   for (val = 0; val < 255; val++)
      {
      analogWrite (greenpin, val);
      analogWrite (redpin, 255-val);
      delay (15);
   }  
}
