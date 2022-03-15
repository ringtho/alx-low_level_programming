#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase to stdout
 * Return: No return
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
