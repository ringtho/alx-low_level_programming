#include <stdio.h>
#include <unistd.h>

/**
 *
 * main - Entry point
 *
 * write: print string to standard output using write
 * Return: it should return 1 for success
 *
 */
int main(void)
{
	write(1,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",61);
	return (1);
}
