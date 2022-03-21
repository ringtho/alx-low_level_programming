#include "main.h"

/**
 * _strcpy - copies string pointed to by src to dest
 * @dest: variable where data will be copied
 * @src: source of data
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
