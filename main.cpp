#include <Arduino.h>

int8_t inttruptppin = 2;
int8_t ledpin = 12;

void functionISR(){
  digitalWrite(ledpin, HIGH);
  //bool inttruptflag = true;
  
}
void setup() {
     pinMode(inttruptppin,INPUT_PULLUP);
     pinMode(ledpin,OUTPUT);      
     attachInterrupt(digitalPinToInterrupt(inttruptppin), functionISR, RISING);
}

void loop() {
   if(digitalRead(inttruptppin) == LOW){
      digitalWrite(ledpin, HIGH);
    }else{
      digitalWrite(ledpin, LOW);
    }
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}