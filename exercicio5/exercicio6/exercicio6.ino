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

  if(pot > 300 and pot<500){
    digitalWrite(2,1);
    
    
  }else{
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
    delay(100);
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    delay(100);
    
  }
}
