#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to be fed into the function
 * Return: the last digit
 */
int print_last_digit(int num)
{
	int last_dig;

	last_dig = num % 10;

	if (last_dig < 0)
	{
		last_dig *= -1
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
