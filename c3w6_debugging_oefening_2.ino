// in dit voorbeeld gebruiken we een LDR (light dependend resistor) als input en een buzzer als outpu
int LDRsensor = A0;    // de LDR sensor is aangesloten op pin A0
const int buzzer = 1;  //buzzer to arduino pin 1
int LDRwaarde = 0;
void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);  // zet seriele poort aan op 9600 baud.
}

void loop() {
  // lees de LDR waarde uit en zet deze in een variable.
  LDRwaarde = analogRead(LDRsensor);

  // print LDR waarde via seriele monitor
  Serial.print("LDR waarde: ");
  Serial.print(LDRwaarde);
  Serial.println("");

  // de LDRwaarde varieert tussen de 0 en 255 deze zetten we om naar een waarde tussen de 0 en 1000
  LDRwaarde = LDRwaarde * 4;
  Serial.print("LDR waarde: ");
  Serial.print(LDRwaarde);
  Serial.println("");
  tone(buzzer, LDRwaarde);  // Send 1KHz sound signal..
}
