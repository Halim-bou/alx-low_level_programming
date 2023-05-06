#include "main.h"

/**
 * clear_bit - set the value of bit to 0 at the given index
 * @n: num
 * @index: the index
 * Return: 1, or -1 if it failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index < 63)
	{
		i = 1 << index;
		*n &= ~i;
		return (1);
	}
	return (-1);
}
