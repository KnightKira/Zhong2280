#include<Servo.h>
Servo Myservo;
void setup() {
  // put your setup code here, to run once:
  Myservo.attach(8);
  Myservo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:

}
