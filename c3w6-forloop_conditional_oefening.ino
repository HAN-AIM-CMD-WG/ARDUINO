const int buttonPin = 2;
const int ledBlauw = 13;
const int ledRood = 12;

int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledBlauw, OUTPUT);
  pinMode(ledRood, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState); //print de status van de pushbutton


      digitalWrite(ledBlauw, LOW);
      digitalWrite(ledRood, HIGH);
      delay(500);
      digitalWrite(ledBlauw, HIGH);
      digitalWrite(ledRood, LOW);
      delay(500);

}