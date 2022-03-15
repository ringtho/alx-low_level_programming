#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @int: the variable of datatype int to be fed into the function
 * Return: 0 if success
 *
 */
int _abs(int num)
{
	int num;

	if (num < 0)
	{
		num *= -1;
		_putchar(num);
	}
	else
	{
		_putchar(num);
	}
	return (0);
}
