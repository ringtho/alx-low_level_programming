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
		if (num != 9)
		{
			putchar(num + '0');
			putchar(',');
		} else
		{
			putchar(num + '0');
			putchar('\n');
		}

		num++;
	}
	return (0);
}
