#include "main.h"

/**
 * times_table - print the 9 times table
 * @n: the number
 *
 */
void print_times_table(int n)
{
	int rw, clm, rst;

	if (n <= 15 || n > 0)
	{
		for (rw = 0; rw <= n; rw++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (clm = 1; clm <= n; clm++)
			{
				rst = (rw * clm);
				if ((rst / 10) > 0)
				{
					_putchar((rst / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((rst % 10) + '0');

				if (clm < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
