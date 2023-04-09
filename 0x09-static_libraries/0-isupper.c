#include "main.h"

/**
 * _isupper - fonction that cheks for uppercase character
 * @c: the character to check
 * Return: 1 if c uppercase and 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
