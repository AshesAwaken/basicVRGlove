#include "PinDefs.h"
int range[5];
const int fingerPins[] = {THUMB_PIN, INDEX_PIN, MIDDLE_PIN, RING_PIN, PINKIE_PIN};

void setup() {
  initializeTestPins(); // Initialize pins for testing
  Serial.begin(9600);
  while(!Serial);
  calibrate(range);
}

void loop() {
  //runTests(); // Perform the tests
  printCalibration(fingerPins, range);
}
