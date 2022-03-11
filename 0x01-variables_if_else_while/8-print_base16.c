#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * print: base16 characters in lowercase
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		char nums = num + '0';
		putchar(nums);
		num++;
	}
	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
