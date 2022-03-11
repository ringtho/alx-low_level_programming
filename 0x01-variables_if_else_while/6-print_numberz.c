#include <stdio.h>

/**
 * main - Entry point
 *
 * print: print all the numbers of base 10 using putcha
 * Return: always 0 (success)
 *
 */
int main (void)
{
	int num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);

}
