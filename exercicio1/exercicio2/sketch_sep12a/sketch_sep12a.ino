int chave;
void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);

  pinMode(7, INPUT);
}

void loop() {

 chave = digitalRead(7);

 if(chave == 0){
  
  digitalWrite(3,1);
  delay(50);
  digitalWrite(3,0);  
  digitalWrite(4,1);
  delay(50);
  digitalWrite(4,0);
  
  digitalWrite(2,0);
  
 }else{
 
  digitalWrite(2,1);
   
  digitalWrite(3,0);
  
  digitalWrite(4,0);
  
 }

}
