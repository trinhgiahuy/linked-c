#define MASK(x) ((unsigned char)(1<<(x)))

void setup() {
  // put your setup code here, to run once:
  DDRB |= MASK(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB |= MASK(5);
  delay(500);
  PORTB &= ~MASK(5);
  delay(500);
}
