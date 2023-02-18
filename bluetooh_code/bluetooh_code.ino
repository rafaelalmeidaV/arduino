#include "SoftwareSerial.h"
SoftwareSerial bluetooth(2,3);
int letra, x,y,z;

void setup() {
  // put your setup code here, to run once:

  bluetooth.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (bluetooth.available() > 0){
  letra = bluetooth.read();
  if(letra == 'H' or letra == 'h'){
   analogWrite(9,x);
   x= x + 100; 
    }

    if(letra == 'L' or letra == 'l'){
   analogWrite(9,x);
    x = x - 10; 
    }
    
  }
}
