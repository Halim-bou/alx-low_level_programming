#include "main.h"

/**
 * get_bit - function that return the value of bit at
 * given index
 * @n: The number
 * @index: the given index
 *
 * Return: the value of the bit at the index or
 * -1 if it failed.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 63)
		return (0);

	for (; n > 0; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}
