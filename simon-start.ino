int buttons[4] = {2, 3, 4, 5};
int leds[4] = {8, 9, 10, 11};

int sequence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void mutateSequence() {
  for (int i = 0; i < 10; i++) {
    sequence[i] = random(0, 4);
  }
}

void setup() {
  randomSeed(analogRead(0));
  for (int i = 0; i < 4; ++i) {
    pinMode(buttons[i], INPUT_PULLUP);
  }
  for (int i = 0; i < 4; ++i) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  //for (int i = 0; i < 4; ++i) {
  //  if (digitalRead(buttons[i]) == LOW) {
  //    digitalWrite(leds[i], HIGH);
  //  } else {
  //    digitalWrite(leds[i], LOW);
  //  }
  //}
  
  for (int i = 0; i < 10; ++i) {
    digitalWrite(leds[sequence[i]], HIGH);
    delay(200);
    digitalWrite(leds[sequence[i]], LOW);
    delay(200);
  }
  mutateSequence();
  delay(3000);
}
