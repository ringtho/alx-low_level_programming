#include <stdio.h>

/**
 * main - Entry point for function
 * print: possible combinations of single didgit numbers
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
