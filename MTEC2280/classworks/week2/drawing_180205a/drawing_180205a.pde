void setup(){// the load when the system set up
  size(1000,1000);
  background(255);
  //background(0,0,0);//background only happen once
  strokeWeight(5);
}
void draw(){//ellipse = circle mouseX and mouseY is the mounse
  //background(0,0,0);//background come first so it wont cover ellipse
  //ellipse(mouseX,mouseY,10,10);
  //line(mouseX,mouseY,pmouseX,pmouseY);
  //println(mouseX,mouseY);
}
void mouseDragged(){// only worsk is mouse is down and moving
  line(mouseX,mouseY,pmouseX,pmouseY);
  println(key);//where the key(mouse)
}

void keyPressed (){
  if(key =='-')//if a is press set to 10
  strokeWeight(10);
   if(key =='=')//if  is press set to 1
  strokeWeight(1);
    if(key ==' ')
    //background(255);
  background(random(255));//reset back to white
  if (key =='r')
  stroke(255,0,0);
    if (key =='g')
  stroke(0,255,0);
    if (key =='b')
  stroke(0,0,255);
  if (key == '1');
    float x = random(width);
  float y = random(height);
    float red =random(255);//the range of Red green and blue
  float green =random(255);
  float blue =random(255);
  
  fill(red,green,blue);
  ellipse(x,y,20,20);
  rect(x+10,y-10,20,20);
      if(key ==' ')
    //background(255);
  background(random(255),random(255),random(255));//reset back to white111
  if (key == 's');
  save("screengrab.png");
}