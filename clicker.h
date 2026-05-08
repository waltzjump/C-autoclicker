#ifndef CLICKER_H
#define CLICKER_H

class Clicker {

private:
    //None so far
protected:
    virtual void click(int cps) = 0; //handles clicker logic for the os
    virtual void runUntil() = 0; //handles runtime condirtions of clicker
public:
    //None so far
};


#endif