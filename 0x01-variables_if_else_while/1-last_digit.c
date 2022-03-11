#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * printf: prints the last number and whether it's greater than 5
 * if it's 0 and less than 6 but not 0
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	} else if (n = 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	} 
	return (0);
}
