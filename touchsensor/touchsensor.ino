int PinL=13;
int PinTouch=9;

void setup() {
  pinMode(PinL, OUTPUT);
  pinMode(PinTouch, INPUT);

}

void loop() {
  digitalWrite(PinL, digitalRead(PinTouch));
  // put your main code here, to run repeatedly:

}
