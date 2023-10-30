#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);

}
