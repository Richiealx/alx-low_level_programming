#include "main.h"

/**
 * cap_string - Capitalizes words on a string
 * @n: string to convert character from
 * Return: Converted string
 */

char *cap_string(char *n)
{
	int b;

	b = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (b = 0; n[b] != '\0'; b++)
	{
		switch (n[b])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[b + 1] > 96 && n[b + 1] < 123)
				{
					n[b + 1] = n[b + 1] - 32;
				}
		}
	}
	return (n);
}
