#pragma once
#include "Machine.h"

//class Machine;

class UI_State {
    public:
    virtual void activate();
    virtual void handle_button_press();
    virtual void handle_rotation(int delta);
    virtual ~UI_State();
};


class UI_Interval : public UI_State {
    public:

    virtual void activate();
    virtual void handle_button_press();
    virtual void handle_rotation(int delta);
    virtual ~UI_Interval();

    private:

    void do_some_stuff();
};


class UI_Interval_Set : public UI_State {
    public:

    virtual void activate();
    virtual void handle_button_press();
    virtual void handle_rotation(int delta);
    virtual ~UI_Interval_Set();

    private:
    void do_other_stuff(int intv);
    
};
