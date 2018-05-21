void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  int mappedVal = map(val, 0, 1023, 5000, 15000);//val in out in2 and out2
  mappedVal *=1000;
 //sound
  digitalWrite(8, HIGH);
  delayMicroseconds(mappedVal);
  digitalWrite(8, LOW);
  delayMicroseconds(mappedVal);
 // out print info (when play dont tun this code)
//  Serial.print(mappedVal);
//  Serial.print(", ");
//  Serial.println(val);
// 
//  delay(20);
}
