#include "main.h"
/**
  * reverse_array - reverses the content of an array of integers
  * @a: the array
  * @n: number of elements the array
  * Return: void -the array reversed-
  */
void reverse_array(int *a, int n)
{
	int aux, i;

	for (i = 0; i < (n / 2); i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
