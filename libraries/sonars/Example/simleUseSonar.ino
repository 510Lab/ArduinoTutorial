#include "Sonar_lib.h"

int distanceOfSonar1;
Sonar sonar1;

void setup() {
  sonar1.setSonarPin(8, 9);                   //trigPin,echoPin
  Serial.begin(9600);
}

void loop() {
  distanceOfSonar1 = sonar1.sonarStart();
  Serial.print("Distance1: ");
  Serial.println(distanceOfSonar1);
}