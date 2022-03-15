#include "main.h"

/**
 * _islower - checks if a character is a lowercase or uppercase
 * @c: character to be subjected to test
 * Return: 1 if lowercase character and 0 if uppercase
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
