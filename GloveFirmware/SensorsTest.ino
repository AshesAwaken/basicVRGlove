/*

  this is just to test to make sure all the sensors/ buttons are working and are not interfering with each other
  ignore the ugly code, it wasnt gonna be pretty ever :3

*/
#include "PinDefs.h"
int sensorReading;
int aButtonState;
int bButtonState;
int xVal;
int yVal;
int buttonState;

void initializeTestPins() {
  pinMode(THUMB_PIN, INPUT);
  pinMode(INDEX_PIN, INPUT);
  pinMode(MIDDLE_PIN, INPUT);
  pinMode(RING_PIN, INPUT);
  pinMode(PINKIE_PIN, INPUT);
  pinMode(X_PIN, INPUT);
  pinMode(Y_PIN, INPUT);
  pinMode(B_BUTTON, INPUT_PULLUP);
  pinMode(A_BUTTON, INPUT_PULLUP);
  pinMode(JOYSTICK_PRESS, INPUT_PULLUP);
}

void runTests() {
  //flex sensor testing
  sensorReading = analogRead(THUMB_PIN);
  Serial.print("thumb: ");
  Serial.println(sensorReading);

  sensorReading = analogRead(INDEX_PIN);
  Serial.print("index: ");
  Serial.println(sensorReading);
  
  sensorReading = analogRead(MIDDLE_PIN);
  Serial.print("middle: ");
  Serial.println(sensorReading);
  
  sensorReading = analogRead(RING_PIN);
  Serial.print("ring: ");
  Serial.println(sensorReading);

  sensorReading = analogRead(PINKIE_PIN);
  Serial.print("pinkie: ");
  Serial.println(sensorReading);
  
  bButtonState = digitalRead(B_BUTTON);
  Serial.print("b Button state: ");
  Serial.println(bButtonState);

  //button testing
  aButtonState = digitalRead(A_BUTTON);
  Serial.print("a Button state: ");
  Serial.println(aButtonState);
  xVal = analogRead(X_PIN);
  yVal = analogRead(Y_PIN);
  buttonState = digitalRead(JOYSTICK_PRESS);
  //joystick testing
  Serial.print("X: ");
  Serial.print(xVal);
  Serial.print( "Y: ");
  Serial.print(yVal);
  Serial.print(" Button: ");
  Serial.println(buttonState);
  delay(1000);
}
