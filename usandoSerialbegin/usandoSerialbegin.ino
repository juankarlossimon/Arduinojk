/*
Interactuar puerto serial
pulsadores
sensores + placa
digitales 0 - 13
anlogas A0-A5
semianalogas 3,5,6,9,10,11
Modulo visualizacipon de lectura 
bits tranfencia velocidad de trans y lectura


usaremos serial.begin -------inicializa el puerto 
Investigar = Serial Proter

dia 21 
sensores de proximidad 
touch sensord
humedad
temp
modulo hidroneumatico

parqueo
serial monitor cantidad parqueos ocupados
parqueos desocupados
aproximidad para  el ingreeso de parqueo 
*/

void setup() {
  Serial.begin(9600);
  

}

void loop() {
  int i =27;
  if (i%2 ==0)
  {
      Serial.println("Es par.");    
  }
  else
  {
    Serial.println("Es impar");
    }

}
