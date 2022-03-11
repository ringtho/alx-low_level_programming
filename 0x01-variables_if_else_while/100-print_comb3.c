#include <stdio.h>

/**
 * main - entry point
 * description: print different combinations of two digit
 * numbers
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int j;
	int i;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
