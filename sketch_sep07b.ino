void setup() {
  // put your setup code here, to run once:
  pinMode(D1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(D1);

  if(buttonState == HIGH){
    digitalWrite(D1, HIGH);
} else {
    digitalWrite(D1, LOW);
}
}
