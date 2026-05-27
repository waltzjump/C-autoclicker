#ifndef WINCLICKER_H
#define WINCLICKER_H

#include "clicker.h"


class WinClicker : protected Clicker {

protected:
    int clickCount = 100;
    void click() override;
};

#endif 