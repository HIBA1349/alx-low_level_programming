#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: void *
 */
void *malloc_checked(unsigned int i)
{
	void *p;

	p = malloc(i);
	if (p == NULL)
		exit(98);
	return (p);
}
