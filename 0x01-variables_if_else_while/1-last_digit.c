#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printr tell
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;

	if ((k % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			k, k % 10);
	}
	else if ((k % 10) < 6 && (k % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			k, k % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			k, k % 10);
	}

	return (0);

}
