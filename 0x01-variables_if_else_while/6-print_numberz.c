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
		char ch = num + '0';
		putchar(ch);
		num++;
	}
	putchar('\n');
	return (0);

}
