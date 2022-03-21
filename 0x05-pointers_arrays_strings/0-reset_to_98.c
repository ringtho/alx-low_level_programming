#include "main.h"

/**
 * reset_to_98 - updates the value of a pointer to 98
 * @*n: the pointer to the number
 * Return: void
 */
void reset_to_98(int *n)
{
	int x = 98;

	*n = &x;
}
