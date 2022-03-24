#include "main.h"

/**
 * _strcat - concatenates string src to dest
 * @src: string to be appended to dest
 * @dest: string to which src will be appended
 * Return: pointer to the transformed dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
  
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
