#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creat an array of chars
 * @size: size of memory
 * @c: the charcter
 *
 * Return: array of c or NULL .
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
