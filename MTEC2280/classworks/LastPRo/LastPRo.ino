int ledPin[] = {5, 6,10,11};
void setup() {

  // put your setup code here, to run once:
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);


}

void loop() {
    
  digitalWrite(ledPin[5], HIGH);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[10], HIGH);
  digitalWrite(ledPin[11], LOW);

}
