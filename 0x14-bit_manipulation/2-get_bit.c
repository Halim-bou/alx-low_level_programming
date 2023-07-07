#include "main.h"
#include <stdlib.h>

/**
 * get_bit - funtion that reurn the value of a bit at given index
 * @n: the number
 * @index: the index of the bit value to look for
 *
 * Return: Value of the bit at the index, -1 in error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;

	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	if (i < index)
		return (0);
	return (-1);
}
