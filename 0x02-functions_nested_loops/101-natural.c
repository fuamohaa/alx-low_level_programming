#include <stdio.h>
/**
*main - Print multiplies
*of 3 or 5 below 1024
*Return: always success.
*/
int main(void)
{
	int n, s = 0;
	
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		s += n;
	}
	printf("%d\n", s);
	return (0);
}
