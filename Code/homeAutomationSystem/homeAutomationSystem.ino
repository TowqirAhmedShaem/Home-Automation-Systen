#define buzzer 11
#define ldrPin A0
#define tempPin A1
#define flame 8
int Flame = HIGH;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup() {
  Serial.begin(9600);


  pinMode(ldrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(flame, INPUT);
  pinMode(tempPin, INPUT);
  pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop() {
  //Flame Start
  Flame = digitalRead(flame);
  if (Flame == LOW) {
    //    digitalWrite(buzzer, HIGH);
    Serial.println("Fire Detected");
    delay(200);
  }
  else {
    digitalWrite(buzzer, LOW);
  }
  //Flame End

  // LDR
  int ldrStatus = analogRead(ldrPin);
  // Serial.print("LDR Value: ");
  //Serial.println(ldrStatus);

  if (ldrStatus <= 900) {
    //Serial.println("No Light Detected");
    //digitalWrite(buzzer, LOW);

  }

  else {
    Serial.println("Light Detected");
    //digitalWrite(buzzer, HIGH);
  }
  delay(500);
  //ldr end


digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);

  Serial.println("**********");
}
