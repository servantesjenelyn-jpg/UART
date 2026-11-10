void blink(){

    for(int i =0; i<NUM_PINS ; i++){
    digitalWrite(LED[i],1);
  }
  delay(500);
  for(int i =0; i<NUM_PINS ; i++){
    digitalWrite(LED[i],0);
  }
  delay(500);
  
}
void alt(){

  for(int i=0; i<3;i++){
    digitalWrite(LED[i],1);
  }
  delay(500);
  for(int i =0; i<3; i++){
    digitalWrite(LED[i],0);
  }
  for(int i =3; i<NUM_PINS; i++){
    digitalWrite(LED[i],1);
  }
  delay(500);
  for(int i =3; i<NUM_PINS; i++){
    digitalWrite(LED[i],0);
  }

}
void run(){
  
  for(int i = 0; i<NUM_PINS; i++ ){
    digitalWrite(LED[i],1);
    delay(500);
    digitalWrite(LED[i],0);
  }
  for(int i = NUM_PINS -2; i >= 1 ; i--){
    digitalWrite(LED[i],1);
    delay(500);
    digitalWrite(LED[i],0);
  }
  }

