const int lightSensorPin = A5;
const int ledPin = 2;
const int valumbral = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(lightSensorPin, INPUT);
}

void loop() {
  int lightIntensity = analogRead(lightSensorPin);

  Serial.print("Intensidad de luz: ");
  Serial.println(lightIntensity);

  if (lightIntensity > valumbral) {
    turnOnLED();
  } else {
    turnOffLED();
  }
  Serial.print("Intensidad de luz: ");
  Serial.println(lightIntensity);
  delay(1000);
}

void turnOnLED() {
  digitalWrite(ledPin, HIGH);
}

void turnOffLED() {
  digitalWrite(ledPin, LOW);
}
