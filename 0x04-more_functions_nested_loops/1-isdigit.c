#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9.
 * @c: is the character to check.
 * Return: 1 if c is a digit and otherwise return 0.
 */
int _isdigit(int c)
{
	if (c <= '0' && c <= 'a')
	{
		return (1);
	}
	return (0);
}
