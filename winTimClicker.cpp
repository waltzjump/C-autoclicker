#include "winTimClicker.h"
#include <windows.h>
#include <iterator>
#include <chrono>


WinTimClicker::WinTimClicker(int seconds){
    duration = std::chrono::seconds (seconds);
}

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

void WinTimClicker::run() {
    auto curTime = std::chrono::high_resolution_clock::now();
    const auto goalTime = duration + curTime;
    while (curTime <= goalTime) {
        click(100);
        curTime = std::chrono::high_resolution_clock::now();
    }


}