#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * Return: 0 for success
 */
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		if (i < 100)
			printf(" ");
	}
	putchar(10);
	return (0);
}
