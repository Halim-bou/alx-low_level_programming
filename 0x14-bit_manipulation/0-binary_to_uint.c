#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: number to be coverted
 *
 * Return: the number converted, or 0 if
 * b not equal 0 or 1,or id b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int len = 0;
	unsigned int ui = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	for  (; i < len; i++)
	{
		ui = ui << 1;
		if (b[i] == '1')
			ui = ui + 1;
	}
	return (ui);
}
