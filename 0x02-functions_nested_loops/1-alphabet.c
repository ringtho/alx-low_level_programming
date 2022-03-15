#include "main.h"

/**
 * print_alpahbet(): prints the alphabet in lowercase
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
}	
