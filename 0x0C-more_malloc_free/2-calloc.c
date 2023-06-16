#include "main.h"

/**
 * _calloc - allocate memory for array of elements
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to the new memory or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int size_arr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size_arr = nmemb * size;
	array = malloc(size_arr);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size_arr; i++)
	{
		array[i] = 0;
	}
	return (array);
}
