#include <Romi32U4.h>

bool buttonAPressed = false;
bool buttonBPressed = false;

Romi32U4ButtonA buttonA;
Romi32U4ButtonB buttonB;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //Serial.print(".");
  if (buttonA.getSingleDebouncedPress()) {
    buttonAPressed=true;
  }
  
  if(buttonB.getSingleDebouncedPress()){
    buttonBPressed = true;
  }

  if(buttonAPressed && buttonBPressed){
    Serial.println("Hello!");
    buttonAPressed = false;
    buttonBPressed = false;
  }
  
}
