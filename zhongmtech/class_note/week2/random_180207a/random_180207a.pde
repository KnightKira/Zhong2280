void setup() {
  size(1000,1000);
  noStroke();
}
void draw() {
  float x = random(width);
  float y = random(height);
  //float x2 = random(1-100);
  //float x3 = random(1-100);
  float red =random(255);//the range of Red green and blue
  float green =random(255);
  float blue =random(255);
  
  fill(red,green,blue);
  ellipse(x,y,20,20);
  rect(x+10,y-10,20,20);
}