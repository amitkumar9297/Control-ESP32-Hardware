// we use relay already builtin ESP32

void setup() {
  // initialize digital pin Relay_BUILTIN as an output.
  pinMode(25, OUTPUT);
}

void loop() {
  digitalWrite(25, HIGH); 
  delay(1000);                       
  digitalWrite(25, LOW);    
  delay(1000);   
}