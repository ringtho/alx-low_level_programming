#include "main.h"
#include <stdio.h>

/**
 * print_array - print nelements of an array of integers
 * @a: pointer
 * @n: number of array elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
