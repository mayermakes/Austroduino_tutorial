#include <Arduino.h>

#define LED 1
#define LEDGND 0


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LEDGND, OUTPUT);
  digitalWrite(LEDGND, LOW);

  Serial.begin(57600);
  Serial.println("Hello, World!");

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED, HIGH);
Serial.println("LED ON");
delay(1000);
digitalWrite(LED, LOW);
Serial.println("LED OFF");
delay(1000);

}

// put function definitions here:
