int pot;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pot = analogRead(0);
  Serial.println(pot);

  if(pot < 600){
    digitalWrite(2,1);
    delay(100);
    digitalWrite(2,0);
    delay(100);
    
  }else{
    digitalWrite(2,0);
    digitalWrite(3,0);
    
  }
}
