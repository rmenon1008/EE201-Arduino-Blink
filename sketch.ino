// https://wokwi.com/projects/345976721310220882

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  float period = map(analogRead(A0), 0, 1023, 5000, 200);

  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  
  delay(period);
}
