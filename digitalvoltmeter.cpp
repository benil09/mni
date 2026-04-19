#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);
float rawData = 0;
float voltage = 0.0;
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  rawData = analogRead(A1);
  voltage = rawData * 5.0 / 1023;
  lcd.setCursor(0, 0);
  lcd.print("Voltage: ");

  lcd.setCursor(0, 1);
  lcd.print(voltage);
  lcd.print(" V   ");
  
}
