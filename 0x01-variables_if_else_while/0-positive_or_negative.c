#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;

	if (k > 0)
		printf("%d is positive\n", k);
	else if (k < 0)
		printf("%d is negative\n", k);
	else
		printf("%d is zero\n", k);

	return (0);
}
