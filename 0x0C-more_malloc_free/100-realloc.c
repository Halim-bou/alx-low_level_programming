#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size of ptr
 * @new_size: the size of the new memory
 *
 * Return: ptr or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reaptr;
	unsigned int i, size;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	size = new_size;
	if (size > old_size)
	{
		size = old_size;
	}
	if (ptr == NULL)
	{
		reaptr = malloc(new_size);
		if (reaptr == NULL)
		{
			return (NULL);
		}
		return (reaptr);
	}
	reaptr = malloc(new_size);
	if (reaptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > size; i++)
	{
		reaptr[i] = ((char *)ptr)[i];
	}
	free(reaptr);
	return (reaptr);
}
