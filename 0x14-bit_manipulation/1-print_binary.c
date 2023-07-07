#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that print binary representation of a number
 * @n: the number to covert to binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0, j = 0;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		j = j << 1;
		j = j + (n & 1);
		i++;
		n = n >> 1;
	}
	while (j > 0)
	{
		_putchar((j & 1) + '0');
		j = j >> 1;
		i--;
	}
	if (i > 0)
	{
		while (i)
		{
			_putchar('0');
			i--;
		}
	}
}
