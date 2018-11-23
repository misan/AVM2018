PImage img;  

void setup() {
  size(300, 360); 
  noSmooth(); 
  frameRate(5); // you can change the frame rate to make it slower or faster
  img = loadImage("marilyn.jpg");  
  img.loadPixels();
}

int c, j=0;
void draw() {
  background(100);
  textSize(24);
  c=img.pixels[j];  
  int blue=(c&255), green=(c>>8)&255, red=(c>>16)&255;
  text("["+((j%30)+1)+","+(j/30+1)+"]="+red+","+green+","+blue, 30, 340);
  scale(10); 
  img.pixels[j]=0xffffffff;
  img.updatePixels();
  image(img, 0, 0);
  img.pixels[j++]=c;
  img.updatePixels();
  if (j==img.pixels.length)  j=0;
}

