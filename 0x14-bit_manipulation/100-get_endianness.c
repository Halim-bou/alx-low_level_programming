#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - Function that check the endianness
 *
 * Return: 0 if big endian, or 1 if little endian.
 */
int get_endianness(void)
{
	int a;
	char *b;

	b = (char *)&a;
	return (*b + 48);
}
