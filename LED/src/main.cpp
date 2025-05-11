#include <Arduino.h>

int LEDRED = D0;
int LEDYELLOW = D1;
int LEDGREEN = D2;

void setup() {
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDGREEN, OUTPUT);
}

void loop() {
  digitalWrite(LEDRED, HIGH);
  delay(1000);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDYELLOW, HIGH);
  delay(2000);
  digitalWrite(LEDYELLOW, LOW);
  digitalWrite(LEDGREEN, HIGH);
  delay(3000);
  digitalWrite(LEDGREEN, LOW);
}

