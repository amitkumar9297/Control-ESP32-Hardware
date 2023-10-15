// we play buzzer of ESP32

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin BUZZER_Builtin as an output.
  pinMode(27, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(27, HIGH);   // turn the BUZZER on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(27, LOW);    // turn the BUZZER off by making the voltage LOW
  delay(100);                       // wait for a second
}