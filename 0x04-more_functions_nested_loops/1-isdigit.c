#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: The digit to be checked
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
