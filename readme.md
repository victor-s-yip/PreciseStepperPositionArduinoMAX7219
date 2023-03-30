Precision Stepper Motor Arduino Project

Objective: Create a device that can read stepper motor signals, interpret them into an absolute and/or relative prosition, and display the value to seven-segment displays. The device will save the last known position into EEPROM when the machine is powered off so absolute position can be maintained.

Uses:
- Arduino Uno R3
- 2x 4 digit seven-segment display
- MAX7219 chip
- Stepper motor in machine 

Core Goals:
- Make EEPROM code - DONE
- Make Stepper Motor reading code 
- Make MAX7219 interface code
- Combine 3 codes into 1 program

Aux Goals:
- Add Absolute/Relative mode switch button
- Add "Zero" button function (relative mode)
- Add "Calibrate" button (two button press or 3rd button)
- Convert code for Arduino Leonardo or 32u4 (more interrupts, less polling, more space)
