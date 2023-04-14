#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: ...
 * @max: ..
 * Return: The pointer to the array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(((max - min) + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (; i <= max ; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
