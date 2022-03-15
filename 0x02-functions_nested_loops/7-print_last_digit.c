#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to be fed into the function
 *
 */
int print_last_digit(int num)
{
	int last_dig;

	last_dig = num % 10;
	return (last_dig);
}
