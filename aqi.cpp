

#define MQ135_PIN A0

float sensorValue;
float voltage;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read analog value from MQ-135
  sensorValue = analogRead(MQ135_PIN);

  // Convert to voltage
  voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("  Voltage: ");
  Serial.print(voltage);
  Serial.print(" V  ");

  // Basic AQI indication (approximate)
  if (sensorValue < 200) {
    Serial.println("Air Quality: Good");
  }
  else if (sensorValue < 400) {
    Serial.println("Air Quality: Moderate");
  }
  else if (sensorValue < 600) {
    Serial.println("Air Quality: Unhealthy");
  }
  else {
    Serial.println("Air Quality: Hazardous");
  }

  delay(1000);
}