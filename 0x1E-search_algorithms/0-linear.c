#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - function that searchesfor a value in array
 * of integeres using the Linear search
 * @array: array to search in
 * @size: The size of array
 * @value: The value looking for
 * Return: return 1 if number match or -1 if if field
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
