#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
