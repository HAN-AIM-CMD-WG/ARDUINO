int const ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // 0 volt naar het lampje sturen (uit).
  digitalWrite(ledPin, LOW);
  delay(1000);

  // 5 volt naar het lampje sturen (aan).
  digitalWrite(ledPin, HIGH);
  delay(1000);
  
  // analogWrite() werkt met tussenliggende waardes van 0 (LOW) tot 255 (HIGH).
  // We gaan nu 2,5 volt naar het lampje sturen (half gedimd).
  analogWrite(ledPin, 128);
  delay(1000);
}
