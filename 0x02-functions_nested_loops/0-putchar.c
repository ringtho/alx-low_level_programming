#include "main.h"

/**
 * main - Entry point
 * _putchar - prints the word _putchar
 * Return: return 0 if success
 */
int main(void)
{
	char word[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
