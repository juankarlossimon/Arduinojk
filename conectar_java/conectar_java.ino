// pins for the LEDs:
const int ledPin = 13;
byte entrada;

 
void setup() {
// initialize serial:
Serial.begin(9600);
// make the pins outputs:
pinMode(ledPin, OUTPUT);
}

 

void loop() {
while (Serial.available() > 0) {
// look for the next valid integer in the incoming serial stream:
entrada = Serial.read();
Serial.println(entrada);

 

if (entrada == 10) {
// print the three numbers in one string as hexadecimal:
digitalWrite(ledPin, HIGH);
Serial.println("encendido");

}

if (entrada==78) {
// print the three numbers in one string as hexadecimal:
digitalWrite(ledPin, LOW);
Serial.println("apagado");
}
}
}
