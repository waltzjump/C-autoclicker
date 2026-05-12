#include "winManClicker.h"
#include <winuser.h>
#include <strsafe.h>

void WinManClicker::click(int cps) {
    

}

void WinManClicker::runUntil() {
    /*
        runUntil for the windows manual clicker will run until the end user presses the spacebar
        uses Windowhooks to handle the input monitoring
    */

    bool done = false;
    while (!done) {

    }
    
}


/*
typedef struct _MYHOOKDATA 
{ 
    int nType; 
    HOOKPROC hkprc; 
    HHOOK hhook; 
} MYHOOKDATA; 
 
MYHOOKDATA myhookdata[NUMHOOKS]; 

HWND gh_hwndMain;
*/