#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet to standard output
 * Return: No return
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 11)
	{
		letter = 'a';

		while(letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
