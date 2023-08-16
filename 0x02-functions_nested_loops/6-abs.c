#include "main.h"

/**
* _abs - Printing absolute value of an input.
* @i: number targeted
*
* Return: success.
*/
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
