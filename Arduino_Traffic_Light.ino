#define red_led 8
#define yellow_led 9
#define green_led 10

void setup() {
  // Set pin 8, 9 and 10 as a digital output.
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);

}

void loop() {
  
  digitalWrite(red_led, HIGH);
  digitalWrite(yellow_led, LOW);
  digitalWrite(green_led, LOW);
  delay(3000);

  digitalWrite(red_led, HIGH);
  digitalWrite(yellow_led, HIGH);
  digitalWrite(green_led, LOW);
  delay(1000);

  digitalWrite(red_led, LOW);
  digitalWrite(yellow_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(2000);

  digitalWrite(red_led, LOW);
  digitalWrite(yellow_led, HIGH);
  digitalWrite(green_led, LOW);
  delay(1000);

}