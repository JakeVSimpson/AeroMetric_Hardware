const int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, HIGH);  // This should turn the buzzer ON
}

void loop() {
  delay(1000);
  digitalWrite(buzzerPin, LOW);  // This should turn the buzzer OFF
  delay(1000);
  digitalWrite(buzzerPin, HIGH);
}
