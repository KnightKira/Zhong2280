void setup() {
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  int val = analogRead(0);//seting 0 to 5
  int mappedVal=map(val,0,1023,10000,30000);
  
  digitalWrite(8,HIGH);
  delay(val+1);
  digitalWrite(8,LOW);
  delay(val+1);
  Serial.print(mappedVal);
  Serial.print(", ");
  Serial.println(val);
  //delay(20);



  
}
