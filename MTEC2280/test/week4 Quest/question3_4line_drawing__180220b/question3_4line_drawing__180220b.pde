void setup() {
  size(1000,1000);}
void draw(){}
void mouseDragged(){// only worsk is mouse is down and moving
  line(0,0,mouseX,mouseY);
  line(1000,1000,mouseX,mouseY);
  line(0,1000,mouseX,mouseY);
  line(1000,0,mouseX,mouseY);
  println(key);
}