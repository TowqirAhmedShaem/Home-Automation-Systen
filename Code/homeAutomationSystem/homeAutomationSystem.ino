#define buzzer 11
#define flame 8
int Flame = HIGH;

void setup() {
  
  pinMode(buzzer, OUTPUT);
  pinMode(flame,INPUT);
}

void loop() {
  Flame = digitalRead(flame);
  if (Flame == LOW) {
    digitalWrite(buzzer, HIGH);
    delay(200);
  }
  else {
    digitalWrite(buzzer, LOW);

  }
}
