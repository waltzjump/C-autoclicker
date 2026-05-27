#include "winClicker.h"
#include <windows.h>


void WinClicker::click() {
    INPUT clicks[clickCount] = {};
    for (int i; i < clickCount; i++) {
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

    SendInput(clickCount, clicks, sizeof(INPUT));
}