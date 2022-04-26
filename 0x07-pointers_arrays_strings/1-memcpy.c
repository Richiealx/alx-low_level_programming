#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: A  pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = 0;

	while (n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}
	return (dest);
}
