//int blankDelay=0;
void setup() {//set up a pin for volt output
  pinMode(5, OUTPUT);
}

void loop() {
  for (int blankDelay = 0; blankDelay < 200; blankDelay = blankDelay + 10) {
    //blankDelay=blankDelay+10;
    digitalWrite(5, HIGH);
    delay(blankDelay);
    digitalWrite(5, LOW);
    delay(blankDelay);
  }
}
