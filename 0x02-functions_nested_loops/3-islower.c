#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to check.
 * Return: 1 in the condition and 0 for else.
 */
int _islower(int c)
{
	for (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
