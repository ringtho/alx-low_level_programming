#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar: print the alphabet in upper case and lower case
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
