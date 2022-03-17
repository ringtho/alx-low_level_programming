#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
