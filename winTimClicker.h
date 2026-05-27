#ifndef WINTIMCLICKER_H
#define WINTIMCLICKER_H

#include "winClicker.h"
#include <chrono>

/*
This header file declares the skeletion of the windows timer clicker.
The windows time clicker is a clicker that goes until it runs out of time
windows time clicker extendes clicker.h
*/

class WinTimClicker : protected WinClicker {

private:
    std::chrono::seconds duration;
public:
    WinTimClicker(int seconds);
    void run() override; //handles runtime condirtions of clicker
    
};


#endif