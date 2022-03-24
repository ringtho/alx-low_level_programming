#include "main.h"

/**
 * _strncpy - copies a string just like strncpy
 * @src: string to be appended at the end of dest
 * @dest: string to whic src is appended
 * @n: the number of bytes
 * Return: pointer to dest 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	
	return (dest);
}
