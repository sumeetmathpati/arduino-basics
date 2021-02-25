/*********************************************************** 
File name: 28 - Control led using clap system
Let, control led using  clap
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int soundSensor =3;
int LED = 4 ;
boolean LEDStatus = false;
void setup() {
pinMode(soundSensor,INPUT);
pinMode(LED,OUTPUT);
}
void loop() {
int SensorData=digitalRead(soundSensor);
if(SensorData==1){
if (LEDStatus==false){
LEDStatus=true;
digitalWrite(LED,HIGH);
}
 else  {
LEDStatus=false;
digitalWrite(LED,LOW);
}
}
}
