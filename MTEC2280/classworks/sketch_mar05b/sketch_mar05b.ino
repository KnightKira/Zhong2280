// which digital pins are the LEDs on
int ledPin[] = {5,6,7,8,9};


void setup() {
  for (i=0;i<5;i++){
  pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  for (i=0;i<5;i++){
  digitalWrite(ledPin[i], LOW);
  for (i=0;i<5;i++){
  digitalWrite(ledPin[i], HIGH);
  }
}

