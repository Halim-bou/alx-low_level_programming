#include "search_algos.h"
#include <stdlib.h>

/**
 * linear_search - search function using linear search algo
 * @array: array to search in
 * @size: size of the array
 * @value: the value to search to
 * Return: the where index is localted to
 */
int linear_search(int *array, size_t size, int value)
{
	int v = value;
	size_t i;

	for (i = 0; i < size; i++)
	{
		v = array[i];
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, v);
			return (i);
		}
		else if (!(v == value))
		{
			printf("Value checked array[%ld] = [%d]\n", i, v);
		}
	}
	return (0);
}
