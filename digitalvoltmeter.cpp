#include <LiquidCrystal.h>

// Initialize LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int analogPin = A0;   // Voltage input pin
float voltage = 0.0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Digital Voltmeter");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(analogPin);

  // Convert to voltage (0-5V range)
  voltage = sensorValue * (5.0 / 1023.0);

  lcd.setCursor(0, 0);
  lcd.print("Voltage:");

  lcd.setCursor(0, 1);
  lcd.print(voltage);
  lcd.print(" V   ");

  delay(500);
}