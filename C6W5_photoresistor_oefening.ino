//licht sensor oefening

const int led = 8;          // led pin
const int sensor_pin = A0;  // sensor pin op de analoge poort
int sensor;					// variabele genaamd sensor
const int threshold = 500;  // threshold to turn LED on, pas deze aan afhankelijk van wat de serial monitor uitleest

void setup(){  // setup code that only runs once
  pinMode(led, OUTPUT);  // set LED pin as output
  Serial.begin(9600);    // initialize serial communication
}

void loop(){   // code that loops forever
  sensor = analogRead(sensor_pin);   // read sensor value
  Serial.println(sensor);			 // print sensor value
  if(sensor<threshold){  // if sensor reading is less than threshold
    digitalWrite(led,HIGH);  // turn LED on
  }  
  else{  // else, if sensor reading is greater than threshold
    digitalWrite(led,LOW);    // turn LED off
  }
}