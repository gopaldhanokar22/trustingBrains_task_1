 /* 
Task 1 :- The One-Liner blinking an LED 
Author Name :- Gopal Dhanokar 
Company :- TRUSTING BRAINS
*/
void setup() {  
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, (millis() / 1000) % 2);
}
