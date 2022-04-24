#include "main.h"

/**
 * _strncpy - Copies a string up to an n byte
 * @dest: Destination string
 * @src: the source of the string
 * @n: number of bytes to look
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
