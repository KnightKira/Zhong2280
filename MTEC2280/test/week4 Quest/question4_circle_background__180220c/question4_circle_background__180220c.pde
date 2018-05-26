
void setup() {
  size(1000,1000);
  noStroke();

}
void draw(){}
void keyPressed (){
  if(key =='x')//if a is press set to 10
  ellipse(random(1000),random(1000),random(1000),random(1000));
  fill(random(255),random(255),random(255));
   if(key =='b')//if  is press set to 1
  background(random(250),random(250),random(250));

}