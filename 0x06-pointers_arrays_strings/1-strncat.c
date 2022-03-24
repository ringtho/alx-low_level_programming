#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the target string
 * @src: the source string
 * @n: number of bytes
 */
char *_str(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
