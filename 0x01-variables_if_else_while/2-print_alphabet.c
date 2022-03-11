#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar: print the alphabet from a - z lowercase
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);

}
