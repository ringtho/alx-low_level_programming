#include <stdio.h>

/**
 *
 * main - Entry point
 * print: all the base 10 numbers from 0 to 9
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);

}
