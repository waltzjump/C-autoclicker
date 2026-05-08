#ifndef WINMANCLICKER_H
#define WINMANCLICKER_H

#include "clicker.h"

/*
This header file declares the skeletion of the windows manual clicker.
The windows manual clicker is an auto clicker that will execute until the end user tells it to stop.
windows manual clicker extendes clicker.h
*/

class WinManClicker : protected Clicker {

protected:
    void click(int cps) override; //handles clicker logic for the os
    void runUntil() override; //handles runtime condirtions of clicker
    
};


#endif