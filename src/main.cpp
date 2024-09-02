#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);

  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDR, LOW);
  delay(1000);
  digitalWrite(LEDR, HIGH);
  delay(1000);

  digitalWrite(LEDG, LOW);
  delay(1000);
  digitalWrite(LEDG, HIGH);
  delay(1000);

  digitalWrite(LEDB, LOW);
  delay(1000);
  digitalWrite(LEDB, HIGH);
  delay(1000);
}

// put function definitions here:
// int myFunction(int x, int y) {
//  return x + y;
// }