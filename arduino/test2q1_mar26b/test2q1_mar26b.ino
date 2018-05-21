int ledPin[] = {5, 6, 7, 8};
int x,y;
void setup() {
    for (int i = 5; i < 8; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  // put your setup code here, to run once:
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
 

  Serial.begin(9600);
  randomSeed(analogRead(0));
  //x=random(1,4);
 // y=random(1,4);


  //Serial.print(x);
  //Serial.println(" is on");
  
  //Serial.print(y);
  //Serial.println(" is on");
  do{
    x=random(1,4);
  y=random(1,4);}while(x==y);
  //Serial.print(y);
  //Serial.println(" is on2");  
  
  Serial.print(x); 
  Serial.println(" is on");   
  Serial.print(y); 
  Serial.println(" is on");   
  

}

void loop() {
  
  digitalWrite(ledPin[x], HIGH);
  digitalWrite(ledPin[y], HIGH);


}
