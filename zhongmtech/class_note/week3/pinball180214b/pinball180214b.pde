//this is useable for everthing but it a set up 
float x;
float y;
float xSpeed;
float ySpeed;
float red =random(255);//the range of Red green and blue
float green =random(255);
float blue =random(255);
void setup(){
  size (500,500);
  //x,y is put in the global use
  x=width/2;
  y=height/2;
  xSpeed=random(2,5);
  ySpeed=random(2,5);
}
void draw(){
  background(red,green,blue);
  fill(red,blue,green);
  x=x+xSpeed;//x is calling x again and adding sspeed
  y=y+ySpeed;
  if (x >= width){
    xSpeed = xSpeed *-1;
    red =random(255);
    green =random(255);
    blue =random(255);
  }
  if (x <= 0){
    xSpeed = xSpeed *-1;
    red =random(255);
    green =random(255);
    blue =random(255);
  }
  if (y >= height){
    ySpeed = ySpeed *-1;
    red =random(255);
    green =random(255);
    blue =random(255);
  }
  if (y <= 0){
    ySpeed = ySpeed *-1;
    red =random(255);
    green =random(255);
    blue =random(255);
  }
  ellipse(x,y,20,20);
  
  
}