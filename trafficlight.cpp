// Pin definitions
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
  // Set all pins as output
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {

  // RED ON (Stop)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(5000);  // 5 seconds

  // YELLOW ON (Wait)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(2000);  // 2 seconds

  // GREEN ON (Go)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(5000);  // 5 seconds
}