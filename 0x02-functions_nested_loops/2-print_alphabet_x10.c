#include "stdio.h"
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times alphabet
 * print_alphabet_x10 - print alphabet
 *
 * Return: x10 a-z
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{ 
	int n, i;
{
int alphabet;
int count;


count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');
}

        i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
