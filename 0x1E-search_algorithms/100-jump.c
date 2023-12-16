#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function to search in array sorted of integers
 * @array: The to search in
 * @size:  The size of the array
 * @value: The value to search for
 *
 * Return: The index where the value found or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, steps;

	if (array == NULL || size == 0)
		return (-1);
	steps = sqrt(size);
	i = jump = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += steps;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	while (i < jump && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
