#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main(void)
{
    int cnt = 30;

    lcd.printf("108061120\n");
    while (1) {
        lcd.locate(5,1);
        lcd.printf("%5i", cnt);
        ThisThread::sleep_for(1s);
        if (cnt > 0) {
            cnt--;
        } else {
            ThisThread::sleep_for(3s);
            cnt = 30;
        }
    }
}