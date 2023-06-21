#include "function_pointers.h"
#include "stddef.h"

/**
 * int_index - function thet looks for integers
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: function pointer to comare elem in the array
 * Return: .....
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	if (i == size)
		return (-1);
	return (-1);
}
