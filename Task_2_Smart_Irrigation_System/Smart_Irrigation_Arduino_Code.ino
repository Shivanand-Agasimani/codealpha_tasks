#include <LiquidCrystal.h>

// LCD connections: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int moisturePin = A0;
const int motorPin = 8;
const int ledPin = 13;

// Adjust this threshold after observing sensor readings
const int moistureThreshold = 500;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("Smart Agriculture");
  delay(1500);
  lcd.clear();
}

void loop() {
  int moistureValue = analogRead(moisturePin);

  // Higher reading = wetter soil for your sensor
  bool soilWet = (moistureValue > moistureThreshold);

  // Motor ON only when soil is dry
  if (soilWet) {
    digitalWrite(motorPin, LOW);
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(motorPin, HIGH);
    digitalWrite(ledPin, HIGH);
  }

  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(moistureValue);
  lcd.print("   ");

  lcd.setCursor(0, 1);
  if (soilWet) {
    lcd.print("Motor: OFF      ");
  } else {
    lcd.print("Motor: ON       ");
  }

  Serial.print("Moisture: ");
  Serial.print(moistureValue);
  Serial.print(" | Motor: ");
  Serial.println(soilWet ? "OFF" : "ON");

  delay(500);
}