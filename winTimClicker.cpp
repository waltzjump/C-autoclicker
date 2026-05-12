#include "winTimClicker.h"
#include <windows.h>
#include <iterator>



void WinTimClicker::click(int cps) {
    INPUT clicks[cps] = {};
    for (int i; i < cps; i++) {
        clicks[i].type = INPUT_MOUSE;
        if (i  == 0) {
            clicks[i].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        }
        else if (i % 2 != 0) {
            clicks[i].mi.dwFlags = MOUSEEVENTF_LEFTUP;
        }
        else {
            clicks[i].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        }
    }

    SendInput(cps, clicks, sizeof(INPUT));
}

void WinTimClicker::runUntil() {
    click(100);
}

void WinTimClicker::run() {
    runUntil();
}