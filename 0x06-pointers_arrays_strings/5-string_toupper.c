#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @input: string to transform
 * Return: capitalized string
 */
char *string_toupper(char *input)
{
	int i = 0;

	while (input[i])
	{
		if (input[i] >= 'a' && input[i] <= 'z')
			input[i] -= 32;

		i++;
	}

	return (input);
}
