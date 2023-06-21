#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function thet executes a function arg
 * @array: pointer to array
 * @size: size of the array
 * @action: function pointer to iterate throw array
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
