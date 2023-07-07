#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function the set the value of abit to 0 at a given index
 * @n: to number to print in binary
 * @index: the index where we the value 0
 * Return: 1 or -1 if it fails.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rev, num, count, odn;

	rev = count = num = 0;
	odn = *n;
	if (index > 63)
		return (-1);
	while (count < 63)
	{
		rev = rev << 1;
		if (count == index)
			rev += 0;
		else
			rev += odn & 1;
		count++;
		odn = odn & 1;
	}
	while (count > 0)
	{
		num = num << 1;
		num += rev & 1;
		rev = rev >> 1;
		count--;
	}
	*n = num;
	return (1);
}
