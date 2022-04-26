#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: String to check
 * @accept: String that checks
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int length;

	length = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0' && accept[y] != s[x]; y++)
			;
		if (s[x] == accept[y])
			length++;
		if (accept[y] == '\0')
			return (length);
	}
	return (length);
}
