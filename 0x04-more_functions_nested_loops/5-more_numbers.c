#include "main.h"

/**
 * more_numbers - prints numbers form 0 to 14 10 times
 * Return: No return
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
