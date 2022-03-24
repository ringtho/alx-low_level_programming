#include "main.h"

/**
 * _strncat - concatenates strings src and dest using n bytes
 * @src: string to be appended to dest
 * @dest: string to which n bytes of src are to be appended to
 * @n: number of bytes of src to be appended to dest
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; sr[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
