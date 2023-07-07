#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that convert a string of binary
 * to unsigned int decimal numbers
 * @b: The string converted
 *
 * Return: 0 if the string contains other than 0 and 1 or if
 * it's NULL , or the value on decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, convert = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	while (i < len)
	{
		convert = convert << 1;
		if (b[i] == '1')
			convert = convert + 1;
		i++;
	}
	return (convert);
}
