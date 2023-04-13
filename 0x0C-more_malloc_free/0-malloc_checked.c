#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate3s memory using malloc
 * @b: ....
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
