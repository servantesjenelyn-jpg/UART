/*===============================================
Digital OUTPUT LED - Multi-Mode
=================================================
Description:
  This program controls 6 LEDs based on the users input in
  the serial monitor
  1: the Led will Blink
  2: the LED will alternate
  3: the LED will run

  
Program:
  Doctora, France Austin D.
  Servantes, Jenelyn B.
Date:
  2 September 2026
-------------------------------------------------*/



uint8_t const LED[] = {32, 33, 25, 26, 27, 14};
uint8_t const NUM_PINS = sizeof(LED) / sizeof(LED[0]);
int choice;
void setup() {
  Serial.begin(115200);
  for (int i = 0; i < NUM_PINS; i++) {
    pinMode(LED[i], OUTPUT);
  }
 
}
#include "LED_Modes.h"
void loop() {
if(Serial.available() > 0){
  int userinput = Serial.parseInt();
  while(Serial.available() > 0){
    Serial.read();
  }
  choice = userinput;
  Serial.println("Select Mode:");
  Serial.println("1.Blink");
  Serial.println("2.Alternate");
  Serial.println("3.Running");
  Serial.println("Mode "+String(userinput)+" selected");
}
  

  if (choice == 3) {
    run();
  } 
  else if (choice == 1) {
    blink();
  } 
  else if (choice == 2) {
    alt();
  } 
 
}