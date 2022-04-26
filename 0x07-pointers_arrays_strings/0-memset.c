#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: Buffer string
 * @b: Constant byte
 * @n: First n bytes
 * Return: Pointer to a memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
