#include <stdio.h>

/**
 * print_diagsums - "Adds numbers in a diagonal"
 * @a: array containing characters
 * @size: Size of array levels
 */

void print_diagsums(int *a, int size)
{
	int b;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (b = 0; b < s; b += size + 1)
	{
		tl += a[b];
	}

	for (b = size - 1; b < s - 1; b += size - 1)
	{
		tr += a[b];
	}

	printf("%d, %d\n", tl, tr);
}
