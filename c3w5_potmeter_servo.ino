#include <Servo.h>

Servo myServo;

int potPin = A0;   // Potentiometer pin
int servoPin = 9;  // Servo motor pin
int val;           // Variabele om de potentiometerwaarde op te slaan

void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);  // Start de seriële communicatie met een baudrate van 9600 bps
}

void loop() {
  val = analogRead(potPin);         // Lees de potentiometerwaarde (0-1023)
  val = map(val, 0, 1023, 0, 180);    // Kaart de waarde naar een servo-positie (0-180)
  myServo.write(val);                // Stuur de servo naar de berekende positie

  // Stuur de potentiometerwaarde naar de Serial Monitor
  Serial.print("Potentiometerwaarde: ");
  Serial.println(val);

  delay(15);                         // Wacht voor de servo om te bewegen
}
