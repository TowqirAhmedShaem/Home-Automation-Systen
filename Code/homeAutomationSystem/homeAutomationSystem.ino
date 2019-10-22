#define buzzer 11
#define ldrPin A0
#define flame 8
int Flame = HIGH;

void setup() {
  Serial.begin(9600);


  pinMode(ldrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(flame, INPUT);
}

void loop() {
  //  Flame = digitalRead(flame);
  //  if (Flame == LOW) {
  //    digitalWrite(buzzer, HIGH);
  //    delay(200);
  //  }
  //  else {
  //    digitalWrite(buzzer, LOW);
  //  }

  int ldrStatus = analogRead(ldrPin);
  Serial.print("LDR Value: ");
  Serial.println(ldrStatus);

  if (ldrStatus <= 900) {
    Serial.println("No Light Detected");
    digitalWrite(buzzer, LOW);

  }

  else {
    Serial.println("Light Detected");
    digitalWrite(buzzer, HIGH);
  }
  delay(500);
}
