#include "main.h"

/**
 * main - Entry point
 * _putchar: Use putchar to print the alphabet
 * Return: 0 if success
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
	return (0);
}	
