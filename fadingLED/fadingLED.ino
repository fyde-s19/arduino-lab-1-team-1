void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

 void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN,LOW);
  delay(offTime);
 }

void loop() {
  dimmer(100, 10);
  dimmer(100, 20);
  dimmer(100, 30);
  dimmer(100, 40);
  dimmer(100, 50);
  dimmer(100, 60);
  dimmer(100, 70);
  dimmer(100, 80);
  dimmer(100, 90);
  dimmer(100, 100);
  dimmer(100, 90);
  dimmer(100, 80);
  dimmer(100, 70);
  dimmer(100, 60);
  dimmer(100, 50);
  dimmer(100, 40);
  dimmer(100, 30);
  dimmer(100, 20);
  dimmer(100, 10);
}
