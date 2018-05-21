// produce some sweet sounds

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {

  // note one
  for (int i = 0; i < 50; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(2500);

    digitalWrite(4, LOW);
    delayMicroseconds(2500);
  }

  // note two
  for (int i = 0; i < 50; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(3500);

    digitalWrite(4, LOW);
    delayMicroseconds(3500);
  }

  // note three
  for (int i = 0; i < 20; i++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(4500);

    digitalWrite(4, LOW);
    delayMicroseconds(4500);
  }

  

}
