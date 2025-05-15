#include <Arduino.h>

int trigPin = D0;
int echoPin = D1;
int ledRED = D2;
int ledGREEN = D3;

long duration;
long distance;

void setup() {
  pinMode(ledRED, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.034 * duration / 2;

  digitalWrite(ledRED, HIGH);
  delay(1000);
  digitalWrite(ledRED, LOW);
  digitalWrite(ledGREEN, HIGH);
  delay(1000);
  digitalWrite(ledGREEN, LOW);

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  if (distance <= 10)
  {
    digitalWrite(ledRED, HIGH);
  }
  else
  {
    digitalWrite(ledRED, LOW);
  }
  delay(1000);
  if (distance >= 10)
  {
    digitalWrite(ledGREEN, HIGH);
  }
  else
  {
    digitalWrite(ledGREEN, LOW);
  }
  delay(1000);
}

