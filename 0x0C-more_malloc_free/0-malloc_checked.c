#include "main.h"

/**
 * malloc_checked - check the allocated memory
 * @b: ....
 *
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
