#include <Servo.h>

int process = -1;


void setup() {
  Serial.begin(9600);
  cracking_setup();
  delay(1000);
  pushing_setup();
  delay(1000);
  camming_setup();
  delay(1000);
  heat_setup();
}

void loop() {
  delay(2000);
  switch (process) {
    case 0:

      cracking_loop();
      break;


    case 1:

      pushing_loop();
      break;

    case 2:

      camming_loop();
      
      break;

   // case 3:
    
      
  }





}
