#include "main.h"

/**
 * set_bit - function that set the value of a bit to 1
 * at a given index
 *
 * @n: the number  to be operated
 * @index: the given index
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
