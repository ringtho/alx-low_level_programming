#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * putchar: print alphabet without letters q and e
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
