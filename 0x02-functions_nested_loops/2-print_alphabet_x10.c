#include "main.h"

/**
* print_alphabet_x10 - prints alphabet letters
* ten times
* desc: The function uses loop to operate
* Return: success .
*/
void print_alphabet_x10(void)
{
int c = 0;
int l;
while (c++ <= 9)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);

_putchar(10);
}
}
