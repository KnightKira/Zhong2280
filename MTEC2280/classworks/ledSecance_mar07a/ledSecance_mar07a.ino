int ledPin[] = {5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < 5; i++) {

    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
    }
    digitalWrite(ledPin[i], HIGH);
    delay (100);
  }
  if(int i=5){
    digitalWrite(ledPin[i-5], HIGH);
    digitalWrite(ledPin[i-4], HIGH);
    digitalWrite(ledPin[i-3], HIGH);
    digitalWrite(ledPin[i-2], HIGH);
    digitalWrite(ledPin[i-1], HIGH);
    delay (300);
  }
  for (int i = 4; i > -1; i--) {

    for (int i = 4; i > -1; i--) {
      digitalWrite(ledPin[i], LOW);
    }
    digitalWrite(ledPin[i], HIGH);
    delay (100);
  }
  if(int i=-1){
    digitalWrite(ledPin[i+5], HIGH);
    digitalWrite(ledPin[i+4], HIGH);
    digitalWrite(ledPin[i+3], HIGH);
    digitalWrite(ledPin[i+2], HIGH);
    digitalWrite(ledPin[i+1], HIGH);
    delay (300);
  }
  //for (int i = 0; i < 5; i++) {
  //digitalWrite(ledPin[i], LOW);
  //delay (100);
  //}

  //for (int i = 0; i < 5; i++) {
  //digitalWrite(ledPin[i], LOW);
  //delay (100);
  // }
  //for(int i=0;i<5;i++){
  //digitalWrite(ledPin[i],LOW);
  //}
  //delay(600);
}
