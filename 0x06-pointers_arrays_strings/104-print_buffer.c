#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int u, v, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (u = 0; u < size; u += 10)
		{
			printf("%.8x:", u);
			for (v = u; v < u + 10; v++)
			{
				if (v % 2 == 0)
					printf(" ");
				if (v < size)
					printf("%.2x", *(b + v));
				else
					printf("  ");
			}
			printf(" ");
			for (l = u; l < u + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
