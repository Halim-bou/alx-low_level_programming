#include "main.h"

/**
 * reverse_array - print the reverse of th array
 * @n: number of elements in the array
 * @a:an array of integers
 *
 * Return: Always 0 .
 */
void reverse_array(int *a, int n)
{
	int i,  j, *ptr, k;

	ptr = a;

	for (i = 1; i < n; i++)
	{
		ptr++;
	}

	for (j = 0; j < n / 2 ; j++)
	{
		k = a[j];
		a[j] = *ptr;
		*ptr = k;
		ptr--;
	}

}
