#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * write: print string to standard output using write()
 * Return: return 1 (success)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 61);
	return (1);
}
