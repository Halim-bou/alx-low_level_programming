#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes action function
 * @array: array of integer
 * @size: size of the array
 * @action: a pointer to function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
