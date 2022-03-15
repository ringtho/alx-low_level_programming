#include "main.h"

/**
 * times_table - print the 9 times table
 *
 */
void times_table(void)
{
	int rw, clm, rst;
	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (clm = 1; clm <= 9; clm++)
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

			if (clm < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
