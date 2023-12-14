#include "search_algos.h"
void print_array(int *array, int start, int end);

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
	int start, end, cmp;

	start = cmp = 0;
	end = size - 1;
	while (start <= end)
	{
		print_array(array, start, end);
		cmp = (start + end) / 2;
		if (array[cmp] == value)
			return (cmp);
		else if (array[cmp] > value)
			end = cmp;
		else if (array[cmp] < value)
			start = smp + 1;
	}
	return (-1);
}

/**
 * print_array - print the using array
 * @array: The array
 * @start:index from array start
 * @end: index where array end printing
 */
void print_array(int *array, int start, int end)
{
	int i;

	i = start;
	printf("Searching in array: ");
	while (i <= end)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
