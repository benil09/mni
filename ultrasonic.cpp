#define TRIG_PIN 9
#define ECHO_PIN 10
#define LED_PIN 7   // LED to indicate object detection

long duration;
float distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Clear trigger
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // Send 10µs pulse
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo time
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance (cm)
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Condition: object within 20 cm
  if (distance > 0 && distance <= 20) {
    digitalWrite(LED_PIN, HIGH); // Object detected
  } else {
    digitalWrite(LED_PIN, LOW);  // No object
  }

  delay(500);
}
