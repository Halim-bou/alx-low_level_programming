#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function that return the value of a bit to 1 at given index
 * @n: a pointer to the number to be operated
 * @index: the index where to set the bit to 1
 * Return: 1 if it work or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int revnum;
	unsigned long int num;
	unsigned long int count;
	unsigned long int oldn;

	revnum = count = num = 0;
	oldn = *n;
	if (index > 63)
		return (-1);
	while (count < 63)
	{
		revnum = revnum << 1;
		if (count == index)
			revnum += 1;
		else
			revnum += oldn & 1;
		count++;
		oldn = oldn >> 1;
	}
	while (count > 0)
	{
		num = num << 1;
		num += revnum & 1;
		revnum = revnum >> 1;
		count--;
	}
	*n = num;
	return (1);
}
