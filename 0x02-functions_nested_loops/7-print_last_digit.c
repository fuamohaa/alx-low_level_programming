#include "main.h"
/**
* print_last_digit - printing last digit of an input.
* @n: input.
*
* Return: success.
*/
int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)
l *= -1;

_putchar (l + '0');
return (l);
}
