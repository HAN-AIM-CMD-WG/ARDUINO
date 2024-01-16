int const sensor = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  sensorValue = analogRead(sensor);  
  Serial.print("De waarde van de sensor is:");
  Serial.println(sensorValue);
  delay(100);
}
