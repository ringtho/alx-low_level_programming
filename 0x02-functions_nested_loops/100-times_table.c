#include "main.h"

/**
 * times_table - print the 9 times table
 * @n: the number
 *
 */
void print_times_table(int n)
{

	int rw, clm, rst;

	if (n <= 15 && n >= 0)
	{
		for (rw = 0; rw <= n; rw++)
		{
			_putchar('0');
			
			for (clm = 1; clm <= n; clm++)
			{
				_putchar(',');
				_putchar(' ');

				rst = (rw * clm);
				
				if (rst <= 99)
					_putchar(' ');
				if (rst <= 9)
					_putchar(' ');
				if (rst >= 100)
				{
					_putchar((rst / 100) + '0');
					_putchar(((rst / 10) % 10) + '0');
				}
				else if (rst <= 99 && rst >= 10)
				{
					_putchar((rst / 10) + '0');
				}
				_putchar((rst % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
