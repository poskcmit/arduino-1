int buttonRed = 2;
int buttonBlue = 3;
int buttonYellow = 4;
int buttonGreen = 5;

int ledRed = 8;
int ledBlue = 9;
int ledYellow = 10;
int ledGreen = 11;

void setup() {
  for (int i = 2; i <=5; ++i) {
    pinMode(i, INPUT_PULLUP);
  }
  for (int i = 8; i <=11; ++i) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (digitalRead(buttonGreen) == LOW) {
    digitalWrite(ledGreen, HIGH);
  } else {
    digitalWrite(ledGreen, LOW);
  }
  
  if (digitalRead(buttonRed) == LOW) {
    digitalWrite(ledRed, HIGH);
  } else {
    digitalWrite(ledRed, LOW);
  }
  
  if (digitalRead(buttonBlue) == LOW) {
    digitalWrite(ledBlue, HIGH);
  } else {
    digitalWrite(ledBlue, LOW);
  }
  
  if (digitalRead(buttonYellow) == LOW) {
    digitalWrite(ledYellow, HIGH);
  } else {
    digitalWrite(ledYellow, LOW);
  }
}
