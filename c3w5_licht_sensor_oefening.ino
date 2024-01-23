int const sensor = A0;
int const led = 11;

int sensorValue = 0;
int sensorMapped = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensor);  
  // Mijn sensor werkt tussen de waardes 65 (donker) en 860 (licht). 

  sensorMapped = map(sensorValue, 65, 860, 0, 255);

  // Waardes onder de 65 en boven de 860 zijn in principe nog mogelijk.
  // Dit kan problemen geven, omdat dat de geremapte waarde dan onder 0, of boven 255, kan uitkomen.
  // Voorkom onmogelijke waardes:
  if(sensorMapped < 0){
    sensorMapped = 0;
  } else if(sensorMapped > 255){
    sensorMapped = 255;
  }

  analogWrite(led, sensorMapped);
  Serial.print("De waarde van de sensor is:");
  Serial.println(sensorValue);
  delay(100);
}
