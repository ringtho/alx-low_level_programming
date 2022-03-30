#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @a: integer
 * @b: integer
 * Return: 1 if prime, 0 otherwie
 */
int is_divisible(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else
	{
		if (b > 0 && a % b == 0)
		{
			return (0);
		}
		else
		{
			return (aux(a, b - 1));
		}
	}
}

/**
 * is_prime_number - return 1 if prime number and 0 otherwise
 * @n: number
 * Return: 1 for success and 0 for failure
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, n - 1));
}
