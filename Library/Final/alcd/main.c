#include <avr/io.h>
#include <util/delay.h> 
#include <alcd.h>
#include <stdio.h>
int main (void)
{
lcd_init(16);
while(1)
{
lcd_clear();
lcd_gotoxy(0,0);
lcd_putsf("MegaMini_V_3.0");
lcd_gotoxy(0,1);
lcd_putsf("www.diy.ind.in");
_delay_ms(100);
}
}