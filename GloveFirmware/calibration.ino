void calibrate(int range[]) {
  int openHands[5];  
  int closeHands[5]; 
  Serial.println("Open fingers");
  delay(5000);

  for (int i = 0; i < 5; i++) {
    openHands[i] = analogRead(fingerPins[i]);
  }

  Serial.println("Bend Fingers");
  delay(5000);

  
  for (int i = 0; i < 5; i++) {
    closeHands[i] = analogRead(fingerPins[i]);
  }

  
  for (int i = 0; i < 5; i++) {
    range[i] = openHands[i] - closeHands[i];
  }
}

void printCalibration(const int pins[], int range[]) {
    for (int i = 0; i < 5; i++) {
    Serial.print(pins[i]);
    Serial.print(": ");
    Serial.println(range[i]);
  }
  delay(1000);
}