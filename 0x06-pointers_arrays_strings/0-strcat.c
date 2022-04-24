#include "main.h"

/**
 * _strcat - Concatenates two stings
 * @dest: Destination string
 * @src: the source of the string
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
