#include "main.h"

/**
 * _strcat - Concatenates two stings
 * @dest: Destination string
 * @src: the source of the string
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
