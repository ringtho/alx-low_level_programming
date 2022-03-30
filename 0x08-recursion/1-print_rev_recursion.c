#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a character of the string
 * Return: length of the entire string
 */
int _strlen_recursion(char *s);
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}
