#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int a, b, len, total;
	int m = 0;
	char *ptr;

	if (!ac || !av)
		return (NULL);
	total = 0;
	for (a = 0; a < ac; a++)
	{
		len = _strlen(av[a]) + 1;
		total += len;
	}
	ptr = malloc(sizeof(char) * total + 1);
	if (!ptr)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		len = _strlen(av[a]);
		for (b = 0; b < len; b++, m++)
		{
			ptr[m] = av[a][b];
		}
		ptr[m++] = '\n';
	}
	ptr[m] = '\0';
	return (ptr);
}
