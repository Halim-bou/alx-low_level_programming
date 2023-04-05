#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the number to be calculate
 *
 * Return: the natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - squer root of integer
 * @n: the number
 * @i: a number
 * Return: the natrural sqrt
 */
int _sqrt(int n, int i)
{
	int a;
	a = i * i;

	if (a > n)
	{
		return (-1);
	}
	if (a == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
