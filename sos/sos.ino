int tiempo=200;
int pin=13;
void setup() {
  pinMode(pin,OUTPUT);
}
void tres(int duracion) {
for( int i=1 ; i<4  ; i++ ) // repetir 3 veces
  {
    digitalWrite(pin,HIGH); 
    delay(duracion*tiempo);
    digitalWrite(pin,LOW);
    delay(tiempo);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  tres(1);
  delay(2*tiempo);
  tres(3);
  delay(2*tiempo); // tres(3);
  tres(1);  
  delay(4*tiempo); 
  //while(true) {};   // bucle infinito -- endless loop
}
