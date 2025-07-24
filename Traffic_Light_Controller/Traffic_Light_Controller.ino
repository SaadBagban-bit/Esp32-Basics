#define RED_LED    2
#define YELLOW_LED 4
#define GREEN_LED  5

void setup() {
  // put your setup code here, to run once:
  pinMode (RED_LED, OUTPUT);
  pinMode (YELLOW_LED, OUTPUT);
  pinMode (GREEN_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (RED_LED, HIGH);
  digitalWrite (YELLOW_LED, LOW);
  digitalWrite (GREEN_LED, LOW);
  delay (5000);

  digitalWrite (RED_LED, LOW);
  digitalWrite (YELLOW_LED, HIGH);
  digitalWrite (GREEN_LED, LOW);
  delay (2000);

  digitalWrite (RED_LED, LOW);
  digitalWrite (YELLOW_LED, LOW);
  digitalWrite (GREEN_LED, HIGH);
  delay (5000);
}