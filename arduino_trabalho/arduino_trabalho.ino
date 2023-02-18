#include "SoftwareSerial.h"
SoftwareSerial bluetooth(10,11);//2,3
int valorDoBluetooth;

// DEFINIÇÕES DE PINOS

#define dirFrente 4
#define dirTras   3

#define esqFrente 9
#define esqTras   8

void setup() {

  pinMode(dirFrente, OUTPUT);
  pinMode(dirTras,   OUTPUT);
  pinMode(esqFrente, OUTPUT);
  pinMode(esqTras,   OUTPUT);


  digitalWrite(dirFrente, LOW);
  digitalWrite(dirTras,   LOW);
  
  digitalWrite(esqFrente, LOW);
  digitalWrite(esqTras,   LOW);


  bluetooth.begin(9600);
  
}

void loop() {
  
    if(bluetooth.available() > 0){
    valorDoBluetooth = bluetooth.read();
  }
  
  if(valorDoBluetooth == 'F'){

      digitalWrite(dirTras,LOW);
      digitalWrite(esqTras,LOW);
      
        //para Frente
      digitalWrite(dirFrente,HIGH);
      digitalWrite(esqFrente,HIGH);
  }

  if(valorDoBluetooth == 'B'){

      digitalWrite(dirFrente,LOW);
      digitalWrite(esqFrente,LOW);
            //para Trás
      digitalWrite(dirTras,HIGH);
      digitalWrite(esqTras,HIGH);
   }
   
      //PARA ESQUERDA'LEFT'
   if(valorDoBluetooth == 'L'){
      digitalWrite(dirFrente,LOW);
      digitalWrite(esqFrente,LOW);
      digitalWrite(dirTras,LOW);
      digitalWrite(esqTras,LOW);
  
      //PARA ESQUERDA'LEFT'
      digitalWrite(dirTras,HIGH);
      digitalWrite(esqTras,LOW);
    }
    
//PARA DIREITA'RIGHT'
    if(valorDoBluetooth == 'R'){
      digitalWrite(dirFrente,LOW);
      digitalWrite(esqFrente,LOW);
      digitalWrite(dirTras,LOW);
      digitalWrite(esqTras,LOW);
      
      //PARA DIREITA'RIGHT'
      digitalWrite(dirTras,LOW);
      digitalWrite(esqTras,HIGH);
    }
 
}
