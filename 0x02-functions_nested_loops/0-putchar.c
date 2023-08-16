#include "main.h"

/**
*main - print text as output
*
*Return: always success.
*/
int main(void)
{
	char value[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(value[i]);
	}
	_putchar(10);
	return (0);
}
