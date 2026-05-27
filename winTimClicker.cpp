#include "winTimClicker.h"
#include <iterator>
#include <chrono>


WinTimClicker::WinTimClicker(int seconds){
    duration = std::chrono::seconds (seconds);
}


void WinTimClicker::run() {
    auto curTime = std::chrono::high_resolution_clock::now();
    const auto goalTime = duration + curTime;
    while (curTime <= goalTime) {
        click();
        curTime = std::chrono::high_resolution_clock::now();
    }


}