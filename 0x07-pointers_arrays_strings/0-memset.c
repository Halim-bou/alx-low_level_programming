#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte 
 * @n:bytes number of the memory area
 *
 * Return: a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i[s] = b;
		i++;
	}
	return (0);
}
