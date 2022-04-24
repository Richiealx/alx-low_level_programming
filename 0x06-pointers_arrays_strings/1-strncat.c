#include "main.h"

/**
 * a function that concatenates two strings
 * _strncat - Concatenates two stings
 * @dest: Destination string
 * @src: the source of the string
 * @n: number of bytes to look
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
