int pulsador=0;
int estado=0;

int pinLed=10;//4;
int pinPulsador=6;//=8;
void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinPulsador, INPUT);
}

void loop() {
 pulsador=digitalRead(pinPulsador);

 if(pulsador==HIGH)
 {
    estado=1-estado;
  }

  if(estado==1)
  {
    digitalWrite(pinLed, HIGH);
    
  }
  else
  {
    digitalWrite(pinLed, LOW);
    
  }

}
