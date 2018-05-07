const int EchoPin=5;
const int TriggerPin=6;
const int LedPin=13;

void setup() {
  Serial.begin(9600);
  pinMode(LedPin,OUTPUT);
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin,INPUT);

  

}

void loop() {

  int cm=ping(TriggerPin, EchoPin);
  Serial.print("Distancia: ");
  Serial.println(cm);

  if(cm<=12)
   {
    digitalWrite(LedPin,HIGH);
    
    }
    else
    {
      digitalWrite(LedPin,LOW);
    }
    delay(1000);
}

int ping(int TriggerPin, int EchoPin)
{
  long duration, distanceCm;

  digitalWrite(TriggerPin,LOW);
  delayMicroseconds(4);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);

  duration=pulseIn(EchoPin, HIGH);

  distanceCm=duration*10/292/ 2;
  return distanceCm;
  

}
