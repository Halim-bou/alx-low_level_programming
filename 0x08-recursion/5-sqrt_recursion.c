#include "main.h"
int squar(int x, int y);
/**
 * _sqrt_recursion - calculat the natural squar root of a num
 * @n: The number
 *
 * Return: -1 if the number is not a natural square rootor the
 * result .
 */
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}

/**
 * squar - the natural square root
 * @x: the number to be calculated
 * @y: the ilerate
 *
 * Return: the result
 */
int squar(int x, int y)
{
	int opr = y * y;

	if (opr > x)
		return (-1);
	if (opr == x)
		return (y);
	else
		return (squar(x, y + 1));
}
