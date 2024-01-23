const int trigPin = 2;
const int echoPin = 3;
const int buzzerPin = 4;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10) {
    // Piep de buzzer als de afstand minder is dan 10 cm
    digitalWrite(buzzerPin, HIGH);
    delay(500);  // Piep gedurende 0,5 seconden
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);  // Wacht 1 seconde voordat de volgende meting wordt uitgevoerd
}
