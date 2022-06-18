#pragma once
#include "Arduino.h" 
#include "Machine.h"
#include "UI_States.h"

#define DEBUG



bool toggle;


  /*     ----------    S E T U P     --------- */


  void setup() {

    
    #ifdef DEBUG 
      Serial.begin(115200);
      Serial.println("online");
    #endif


    toggle = true;

  }



  /*     ----------    L O O P     --------- */



  void loop() {

    if(toggle) {
      UI_State* new_state = new UI_Interval();
      Machine::changeState(new_state);
    } else {
      UI_State* new_state = new UI_Interval_Set();
      Machine::changeState(new_state);
      //Machine::changeState(new UI_Interval_Set());
    }
    toggle = !toggle;
    delay(2000);
  } // end loop



  /* RESOURCES

    FSM and singletons and static shit:
    https://www.aleksandrhovhannisyan.com/blog/implementing-a-finite-state-machine-in-cpp/
    https://refactoring.guru/design-patterns/singleton
    https://stackoverflow.com/questions/14676709/c-code-for-state-machine
    https://forum.arduino.cc/t/how-to-write-an-arduino-library-with-a-singleton-object/666625/2


    https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes
    https://stackoverflow.com/questions/36240473/singleton-pattern-cannot-call-member-function-without-object

  */