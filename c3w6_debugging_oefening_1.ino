Int led_1 = 3;
Int led_2 = 9;
Int led_3 = 10;
Int led_4 = 11;
Int led_5 = 2;
Int led_6 = 8;
Int led_7 = 4;
Int led_8 = 12;

Int brightness = 0;
Int fadeAMount = 5;

Void setup () {

PinMode (led_1, OUTPUT);
PinMode (led_2, OUTPUT );
pinMode (led_3, OUTPUT);
PinMode (led_4, OUTPUT);
PinMode (led_5, OUTPUT);
pinMode (led_6, OUTPUT);
PinMode (led_7, OUTPUT);
PinMode (led_8, OUTPUT);

}

Void loop () {
{
analogWrite (led_1, brightness);
analogWrite (led_2, brightness);
analogWrite ( led_3, brightness);
analogWrite (led_4, brightness);
}

brightness =brightness+fadeAMount

If (brightness==0||brightness==255)
{
FadeAMount = - fadeAMount;
}
delay (30);

digitalWrite (led_5, HIGH);
delay(1000);
digitalWrite ( led_6, HIGH);
delay(1000);
digitalWrite (led_7, HIGH);
delay(1000);
digitalWrite (led_8, HIGH);
delay(1000);
}