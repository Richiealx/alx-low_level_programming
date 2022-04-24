#include "main.h"

/**
 * a function that concatenates two strings
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int g;
	int h;

	g = 0;

	while (dest[g] != 0)
	{
		g++;
	}

	h = 0;

	while (src[h] != 0 && h < n)
	{
		dest[g] = src[h];
		g++;
		h++;
	}
	return (dest);
}
