// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int x = 0; x <= 4; x++) {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for half a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                       // wait for half a second
  }
  for (int y = 0; y <= 4; y++) {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(2000);                       // wait for two seconds
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(2000);                       // wait for two seconds
  }

}
