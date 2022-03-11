#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * printf: Print whether the number displayed is a negative,
 * positive or zero
 * Return: the reurn is always 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
