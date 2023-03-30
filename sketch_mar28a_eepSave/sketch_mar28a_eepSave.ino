// Program saves value into EEPROM when device loses power
// Uses Interrupt pin 2
#include <EEPROM.h>
float eepVar = 1.0000; // variable to modify
int eepRef = 0; // address to store/recover value from EEPROM

void setup() {
  // put your setup code here, to run once:
  
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2),saveVal, FALLING); 
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

void saveVal() {
    EEPROM.put(eepRef, eepVar);
}
