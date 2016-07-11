#define sensorPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);Serial.print(",\n");
}
