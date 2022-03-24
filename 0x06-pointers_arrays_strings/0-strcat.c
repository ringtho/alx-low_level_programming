#include "main.h"

#include "main.h"
/**
  * _strcat - concatenates 2 strings dest and src
  * @src: string to be appended to dest
  * @dest: the string to whic src will be appended
  * Return: pointer to the transformed dest
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
