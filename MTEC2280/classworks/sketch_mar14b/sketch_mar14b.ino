// produce some sweet sounds

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {
for (int i = 2000; i < 5000; i-=1000) {
    digitalWrite(4, HIGH);
    delayMicroseconds(i);

    digitalWrite(4, LOW);
    delayMicroseconds(i);
  }



  
  

}
