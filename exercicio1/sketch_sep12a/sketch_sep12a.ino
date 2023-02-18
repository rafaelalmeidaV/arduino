int i;
void setup() {
  // put your setup code here, to run once:
  pinMode (2, OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4, OUTPUT);
  
}

void loop() {
  delay(100);
  digitalWrite (4,1);
  delay(100);
  digitalWrite (4,0);
  delay(100);
  digitalWrite (3,1);
  delay(100);
  digitalWrite (3,0);
  
}
