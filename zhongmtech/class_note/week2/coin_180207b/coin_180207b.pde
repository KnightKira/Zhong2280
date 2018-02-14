void setup() {
  size(500,500);
  textAlign(CENTER,CENTER);
  textSize(300);
  //int coin = int(random(2));
  //println(coin);
}
void draw() {}
void keyPressed(){
  background(0);
  int coin = int(random(2));
  if(coin == 0){
    text("head",height/2,width/2);
  println("head");}
  if (coin == 1){
    text("tail",height/2,width/2);
    println("tail");}
  //println(coin);
}