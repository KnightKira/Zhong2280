void setup(){// the load when the system set up
  size(500,500);
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
  background(255);//reset back to white
  if (key =='r')
  stroke(255,0,0);
    if (key =='g')
  stroke(0,255,0);
    if (key =='b')
  stroke(0,0,255);
}