 int val;
 int ledpin=11;
 
void setup() {
 pinMode (ledpin, OUTPUT); 

}

void loop() {
  val=analogRead(A0);
  val=val/4;
  analogWrite(ledpin,val);
  delay(100);

}
