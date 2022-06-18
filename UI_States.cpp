#pragma once
#include "UI_States.h"
#include "Machine.h"
#include "Arduino.h"

/*********** UI_Interval *************/

void UI_Interval::activate() {
    #ifdef DEBUG 
      Serial.println("state changed to UI_Interval");
    #endif
    do_some_stuff();
}
void UI_Interval::handle_button_press() {
    Machine::changeState(static_cast<UI_State *>(new UI_Interval_Set()));
}

void UI_Interval::handle_rotation(int delta) {
    // TODO: implement this after testing
}

void UI_Interval::do_some_stuff() {

}



/*********** UI_Interval_Set *************/


void UI_Interval_Set::activate() {
    #ifdef DEBUG 
      Serial.println("state changed to UI_Interval_Set");
    #endif
    do_other_stuff(3);
}

void UI_Interval_Set::handle_button_press() {
    Machine::changeState(static_cast<UI_State *>(new UI_Interval()));
}

void UI_Interval_Set::handle_rotation(int delta) {
}

void UI_Interval_Set::do_other_stuff(int intv) {
}


UI_State::~UI_State() {}
UI_Interval::~UI_Interval() {}
UI_Interval_Set::~UI_Interval_Set() {}