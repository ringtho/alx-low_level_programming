#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character or number to be subjected to test
 * Return: 1 if c is a letter, lowercase or uppercase
 * Return: 0 if c is a number
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
