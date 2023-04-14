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
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; min <= max ; min++)
	{
		arr[i] = min;
		i++;
	}
	return (arr);
}
