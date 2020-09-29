
int INPUT_PIN = A0;

void setup() {

  Serial.begin(9600);
}

void loop() {
  
  int sensorValue = analogRead(INPUT_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);
  delay(1000);
  Serial.println(voltage);
}
