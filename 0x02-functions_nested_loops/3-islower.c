#include "main.h"

/**
 *
 * _islower - checks if a character is a lowercase or uppercase
 * @c: the character subjected to the test
 * Return: 1 if c is a lowercase and 0 if otherwise
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
