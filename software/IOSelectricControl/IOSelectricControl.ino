/*
  IOSelectricControl

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PA2, OUTPUT); // T2
  pinMode(PA3, OUTPUT); // CK
  pinMode(PA4, OUTPUT); // T1
  pinMode(PA5, OUTPUT); // R2A
  pinMode(PA6, OUTPUT); // R1
  pinMode(PA7, OUTPUT); // R2
  pinMode(PB0, OUTPUT); // R5  
  pinMode(PB1, INPUT);  // b input
  pinMode(PB10, INPUT); // a input - The ready to fire signal
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
}
