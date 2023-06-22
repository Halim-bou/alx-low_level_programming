#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters passed
 * @n: nunmber of element
 *
 * Return: the result or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0, sum = 0;

	va_start(args, n);
	for (; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
