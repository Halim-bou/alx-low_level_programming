#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - return 1 for prime numbers
 * @n: the number to check
 *
 * Return: return the prime function.
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - check the numbers
 * @n: number to check
 * @i: number to use
 *
 * Return: the result.
 */
int _prime(int n, int i)
{
	int p = i * i;

	if (p == n)
	{
		return (0);
	}
	if (n < 1)
	{
		return (0);
	}
	if (p > n)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
