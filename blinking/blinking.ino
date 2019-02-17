void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn on LED (voltage level HIGH)
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);    // turn off LED (voltage level LOW)
  delay(1000);                       
}
