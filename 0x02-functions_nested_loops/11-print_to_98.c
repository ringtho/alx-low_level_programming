#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @num: the starting number
 *
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar(n + '0');
		
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}

	while (n >= 98)
	{
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');

		}
		n--;
	}
	_putchar('\n');
}
