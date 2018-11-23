int tiempo[18]={1,1,1,1,1,3,3,1,3,1,3,3,1,1,1,1,1,5}; 
int pin=13;

void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
 for(int i=0; i<18; i++ ) {
  digitalWrite(pin, (i % 2 == 0) ); 
  delay(tiempo[i]*20); 
 }
}
