#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 except 2 and 4
 * Return: No return
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
		num++
	}
	_putchar('\n');
}
