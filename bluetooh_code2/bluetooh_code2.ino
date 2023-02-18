#include "SoftwareSerial.h"
SoftwareSerial bluetooth(2,3);

int valorDoBluetooth;
int letra, x,y,z;

void setup() {
  // Pinos para controlar motor A
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  // Pinos para controlar motor B
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

  //Motores começam desligados
  // Pinos para controlar motor A
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  // Pinos para controlar motor B
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);

  
  //bluetooth
  serialdobluetooth.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(serialdobluetooth.available()){
    valorDoBluetooth = serialbluetooth.read();
  }
  
  if(valorDoBluetooth == 'A'){
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
  }
      
   if(valorDoBluetooth == 'B'){
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
   }
}
