#include "search_algos.h"

/**
 * interpolation_search - searching with interpolation for
 * value in sorted array
 * @array: The arry to search in
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: the index of the value or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	for (; r >= l;)
	{
		i = l + (((double)(r - 1) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
