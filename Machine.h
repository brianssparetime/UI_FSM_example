#pragma once
#include "UI_States.h"

class UI_State;

class Machine {

    friend class UI_State;

    public:
    static Machine *getInstance();
    static void changeState(UI_State* new_state);
    static void activate();
    static void handle_button_press();
    static void handle_rotation(int delta);


    protected:
    Machine() = default;
    UI_State* current_state;
    static Machine* instance;

};