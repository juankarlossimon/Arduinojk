const int ledPinv=11; //led verde
const int ledPinr=10; //led rojo  
const int ldrPing=A0; //foto resistencia


void setup() {
  Serial.begin(9600);
  pinMode(ledPinr, OUTPUT);
  pinMode(ledPinv, OUTPUT);
  pinMode(ldrPing, INPUT);

}

void loop() {

  //espacio desocupado
  digitalWrite(ledPinv, HIGH);
  
  int ldrStatus=analogRead(ldrPing);

  if(ldrStatus<=300)
  {
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPinv, LOW);
    Serial.println("LDR, oscuro , led encendido");
  }
  else
  {
    digitalWrite(ledPinr, LOW);
    digitalWrite(ledPinv, HIGH);
    Serial.println("------LDR, con luz, led apagado");
  }
  
}
