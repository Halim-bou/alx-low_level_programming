#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size to allocate
 * @c: the character
 *
 * Return: NULL if it fails or size is 0, or a pointer
 * to the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size != 0)
	{
		buffer = malloc(sizeof(char) * size);
		if (buffer == NULL)
			return (NULL);
		while (i < size)
		{
			buffer[i] = c;
			i++;
		}
		return (buffer);
	}
	return (NULL);
}
