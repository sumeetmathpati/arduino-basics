/*********************************************************** 
File name:  3 – Infrared emission sensor module KY-005
Let, Only transmitter modules. 
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
#include <IRremote.h>
IRsend irsend;
void setup()  {
 Serial.begin(9600);
}
void loop()  {
   for (int i = 0; i < 50; i++) { 
     irsend.sendSony(0xa90, 12); // Sony TV power code
     delay(40);
   }
}
