#include <avr/io.h>
#include <util/delay.h> 
#include <alcd.h>
#include <stdio.h>
int main (void)
{
	char c[4];
	int i=1234;
lcd_init(16);

while(1)
{
sprintf(c,"%d",i);
lcd_clear();
lcd_gotoxy(1,1);
lcd_putchar(65);
lcd_gotoxy(5,1);
lcd_puts(c);
lcd_gotoxy(0,0);
lcd_putsf("AVR");
_delay_ms(1000);
}

}