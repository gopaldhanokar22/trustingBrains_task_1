 /* 
Task 1 :- blinking an LED 
Author Name :- Gopal Dhanokar 
Company :- TRUSTING BRAINS
*/
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
