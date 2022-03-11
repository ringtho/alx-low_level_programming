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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ( i != j && j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				/*if (i == 8 && j == 9)
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}*/
			}
		}
	}

	return (0);
}
