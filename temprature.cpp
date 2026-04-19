int sensorPin = A0;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int reading = analogRead(sensorPin);

  // Convert analog value to voltage
  float voltage = reading * (5.0 / 1023.0);

  // Convert voltage to temperature (LM35: 10mV per °C)
  temperature = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}