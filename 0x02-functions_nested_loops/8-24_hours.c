#include "main.h"
/**
* jack_bauer - Printing avery minute of a day.
*
* Return: always return success.
*/
void jack_bauer(void)
{
	int m, h;
	for (h = 0; h <= 23; h++)
	{
	for (m = 0; m <= 59; m++)
	{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar(10);
	}
	}

}
