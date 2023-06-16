#include "main.h"

/**
 * array_range - create array of integers
 * @min: first number in the array
 * @max: largest number in the array
 *
 * Return: pointer to the new array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j, size;

	if (min > max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * (size + 1));
	j = min;
	for (i = 0; j <= max; i++)
	{
		array[i] = j;
		j++;
	}
	return (array);
}
