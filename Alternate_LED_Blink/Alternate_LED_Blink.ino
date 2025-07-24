int led1 = 2;
int led2 = 4;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Turn on LED1, turn off LED2
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);

  // Turn off LED1, turn on LED2
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}
