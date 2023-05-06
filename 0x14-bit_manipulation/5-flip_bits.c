#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that return number of bits
 * @n: the first number
 * @m: second number
 *
 * Return: The reslut of number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, j = 0;

	j = n ^ m;
	while (j)
	{
		if (j & 1)
			i++;
		j >>= 1;
	}
	return (i);
}
