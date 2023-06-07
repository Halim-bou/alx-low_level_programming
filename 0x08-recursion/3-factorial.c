#include "main.h"

/**
 * factorial - calculat the factorial of a given number
 * @n: the number
 *
 * Return: -1 if it field or factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
