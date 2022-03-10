#include <stdio.h>
#include <unistd.h>

/**
 *
 * main- Entry point
 *
 * Description: Print string to standard output using write
 * Return: The return value should be 1 for (Success)
 *
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
