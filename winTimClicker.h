#ifndef WINTIMCLICKER_H
#define WINTIMCLICKER_H

#include "clicker.h"

/*
This header file declares the skeletion of the windows timer clicker.
The windows time clicker is a clicker that goes until it runs out of time
windows time clicker extendes clicker.h
*/

class WinTimClicker : protected Clicker {

private:
    int time;
protected:
    void click(int cps) override; //handles clicker logic for the os
    void runUntil() override; //handles runtime condirtions of clicker
public:
    void run();
    
};


#endif