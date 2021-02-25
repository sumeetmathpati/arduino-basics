/*********************************************************** 
File name: 27 – Linear Magnetic Hall Sensor(KY-024)
Let, Arduino KY-024 linear magnetic hall sensor.
Company: SunRobotics Technologies
Website: www.sunrobotics.co.in
Email: support@sunrobotics.co.in
**********************************************************/
int led = 13; // define the LED pin
int digitalPin = 2; // KY-024 digital interface
int analogPin = A0; // KY-024 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings
void setup() {
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if temperature threshold reached
  {
    digitalWrite(led, HIGH); // turn ON Arduino's LED
  }
  else{
    digitalWrite(led, LOW); // turn OFF Arduino's LED
  }
  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial
  delay(100);
}
