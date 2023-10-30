#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *p, *r;

	p = s1;
	if (s1)
		while (*p++)
			size1++;
	else
		s1 = "";

	p = s2;
	if (s2)
		while (*p++)
			size2++;
	else
		s2 = "";

	r = malloc(size1 + size2 + 1);
	if (!r)
		return (NULL);

	p = r;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = 0;

	return (r);
}
