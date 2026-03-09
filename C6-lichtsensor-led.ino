const int LED = 13;
const int LICHTSENSOR = A0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int licht = analogRead(LICHTSENSOR);
  Serial.println(licht);
  if (licht < 60) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}