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
}
