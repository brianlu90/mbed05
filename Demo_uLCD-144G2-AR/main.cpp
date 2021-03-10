#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main(void)
{
    int cnt = 30;

    uLCD.background_color(0xFFFFFF);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.printf("\n 108061120 \n");
    uLCD.color(GREEN);
    for (cnt = 30; cnt >= 0; cnt--) {
        uLCD.locate(1,2);
        uLCD.printf("%2d", cnt);
        ThisThread::sleep_for(1s);
    }
}