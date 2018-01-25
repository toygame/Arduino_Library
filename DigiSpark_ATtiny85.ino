void setup() {
  pinMode(PB1, OUTPUT);
}
void loop() {
  digitalWrite(PB1, HIGH);   
  delay(1000);  
  digitalWrite(PB1, LOW);
  delay(1000);  
}
