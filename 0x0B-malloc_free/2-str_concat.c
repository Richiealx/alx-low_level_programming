#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *p_str;
	int q, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (q = 0; s1[q] || s2[q]; q++)
		len++;

	p_str = malloc(sizeof(char) * len);

	if (p_str == NULL)
		return (NULL);

	for (q = 0; s1[q]; q++)
		p_str[index++] = s1[q];

	for (q = 0; s2[q]; q++)
		p_str[index++] = s2[q];

	return (p_str);
}
