int ledPin[] = {5, 6, 7, 8};
int x=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(5, HIGH);
  delay (500);
  x=x+1;
  digitalWrite(5, LOW);
  delay (500);
  Serial.print("the LED have Blinked ");
   Serial.print(x);
   Serial.println(" times");

}
