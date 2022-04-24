#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 */

void reverse_array(int *a, int n)
{
	int j;
	int temp;

	for (j = 0; j < n--; j++)
	{
		temp = a[j];
		a[j] = a[n];
		a[n] = temp;
	}
}
