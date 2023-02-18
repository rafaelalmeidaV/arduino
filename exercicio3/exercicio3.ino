int chave,i;
void setup() {
   pinMode (2, OUTPUT);
   pinMode (3, OUTPUT);
   pinMode (4, OUTPUT);

   pinMode (7, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  chave = digitalRead(7);

  if(chave == 0){

    for(i=0;i<5;i++){
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      delay(1000);
      digitalWrite(2,0);
      
      
      
      digitalWrite(3,0);
      
    
      digitalWrite(4,0);    
      delay(100);

      
    }

    
    }

    
}
