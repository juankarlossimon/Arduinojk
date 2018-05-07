/* medir temperatura lm35 
voltaje
temperatura
gnd

---es un sensor analogo  j

A0  5 v A0
   primero 5 v
   medijo A0
   derecha gnd
    
*/
float tempC;
int pinLM35=0;
int Pin
void setup() {
  Serial.begin(9600);
}

void loop() {
  tempC=analogRead(pinLM35); //porque son pines analogicos
//calculamos la temperatura con la f{ormula
// 5 voltaje   tempC lo que mide el sensor 100 valor constantes de formula grados sel   1024 por usar pines analogas solo acepta tazas de transferencia de 0 a 1024 bits
//convertimos nuestra entrada minivolts a analoga
  tempC=(5.0 * tempC * 100.0)/1024.0;

 //envia el dato al puerto serial
 Serial.print(tempC);
 //Salto de linea
 Serial.print("\n");

 //esperamos un tiempo para repetir el proceso 
 delay(1000);
}
