#include "search_algos.h"

/**
 * binary_search - Function that search for a value in a
 * sorted array of integers using binary search algo
 * @array: The array of integers
 * @size: The size of the array
 * @value: The value t search for
 *
 * Return: the index of where the value id located or -1 if it field
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, i;

	start = 0;
	end = size - 1;
	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}
	return (-1);
}
