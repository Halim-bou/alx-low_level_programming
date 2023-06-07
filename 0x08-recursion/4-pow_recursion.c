#include "main.h"

/**
 * _pow_recursion - function that calculet the power or number
 * @x: the base number
 * @y: the exponent
 *
 * Return: 1 if x is 0 and -1 if y less than 0 or the
 * result.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (x * _pow_recursion(x, y + 1));
}
