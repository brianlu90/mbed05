#include "LCD.h"

int main(void)
{
    LCD_init();                     // call the initialise function
    display_to_LCD(0x48);           // ‘H’
    display_to_LCD(0x45);           // ‘E’
    display_to_LCD(0x4C);           // ‘L’
    display_to_LCD(0x4C);           // ‘L’
    display_to_LCD(0x4F);           // ‘O’
    for(char x = 0x30; x <= 0x39; x++) {
        display_to_LCD(x);      // display numbers 0-9
    }
}