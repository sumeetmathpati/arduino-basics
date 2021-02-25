/*********************************************************** 
File name: 15 - Real Time Clock Module
Let, real time clock.
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
#include <Wire.h>
#include "RTClib.h"
RTC_DS1307 rtc;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
void setup () {
 while (!Serial); // for Leonardo/Micro/Zero
 Serial.begin(57600);
 if (! rtc.begin()) {
   Serial.println("Couldn't find RTC");
   while (1);
 }
 if (! rtc.isrunning()) {
   Serial.println("RTC is NOT running!");
   
   rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

 }
}
void loop () {
 DateTime now = rtc.now();
 Serial.print(now.year(), DEC);
 Serial.print('/');
 Serial.print(now.month(), DEC);
 Serial.print('/');
 Serial.print(now.day(), DEC);
 Serial.print(" (");
 Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);
 Serial.print(") ");
 Serial.print(now.hour(), DEC);
 Serial.print(':');
 Serial.print(now.minute(), DEC);
 Serial.print(':');
 Serial.print(now.second(), DEC);
 Serial.println();
 Serial.print(" since midnight 1/1/1970 = ");
 Serial.print(now.unixtime());
 Serial.print("s = ");
 Serial.print(now.unixtime() / 86400L);
 Serial.println("d");
 // calculate a date which is 7 days and 30 seconds into the future
 DateTime future (now + TimeSpan(7, 12, 30, 6));
 Serial.print(" now + 7d + 30s: ");
 Serial.print(future.year(), DEC);
 Serial.print('/');
 Serial.print(future.month(), DEC);
 Serial.print('/');
 Serial.print(future.day(), DEC);
 Serial.print(' ');
 Serial.print(future.hour(), DEC);
 Serial.print(':');
 Serial.print(future.minute(), DEC);
 Serial.print(':');
 Serial.print(future.second(), DEC);
 Serial.println();
 Serial.println();
 delay(3000);
}
