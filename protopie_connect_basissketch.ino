const int knopPin = 2;     // Pin voor de knop
const int ledPin = 13;     // Pin voor de LED

unsigned long vorigeTijd = 0; // Variabele om de tijd bij te houden
bool ledAan = false;        // Status van de LED

void setup() {
  Serial.begin(9600);       // Start seriële communicatie
  pinMode(knopPin, INPUT_PULLUP); // Knop als input met interne pull-up
  pinMode(ledPin, OUTPUT);  // LED als output
}

void loop() {
  // Lees de staat van de knop
  int knopStaat = digitalRead(knopPin);

  // Als de knop is ingedrukt (LOW omdat we pull-up gebruiken)
  if (knopStaat == HIGH) {
    Serial.println("knop"); // Stuur "knop" naar Serial Monitor
    delay(50);              // Debounce vertraging
  }

  // Controleer of er data beschikbaar is op de seriële poort
  if (Serial.available() > 0) {
    String ontvangen = Serial.readStringUntil('\n');
    ontvangen.trim(); // Verwijder eventuele witruimte

    // Als het commando "lamp" is ontvangen
    if (ontvangen == "lamp") {
      digitalWrite(ledPin, HIGH); // LED aan
      Serial.println("LED aan");
      ledAan = true;
      vorigeTijd = millis(); // Sla de huidige tijd op
    }
  }

  // Als de LED aan is en 3 seconden zijn verstreken, zet hem uit
  if (ledAan && (millis() - vorigeTijd >= 3000)) {
    digitalWrite(ledPin, LOW);
    ledAan = false;
    Serial.println("LED uit");
  }
}
