#ifndef WINTIMCLICKER_H
#define WINTIMCLICKER_H

#include "clicker.h"
#include <chrono>

/*
This header file declares the skeletion of the windows timer clicker.
The windows time clicker is a clicker that goes until it runs out of time
windows time clicker extendes clicker.h
*/

class WinTimClicker : protected Clicker {

private:
    std::chrono::seconds duration;
protected:
    void click(int cps) override; //handles clicker logic for the os
public:
    WinTimClicker(int seconds);
    void run() override; //handles runtime condirtions of clicker
    
};


#endif