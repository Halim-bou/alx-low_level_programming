#include "main.h"

int check(int x, int y);

/**
 * is_prime_number - is prime or not
 * @n: The number
 *
 * Return: 0 if it's not prime or 1 if prime.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n > 1)
		return (check(n, 2));
	else
		return (0);
}

/**
 * check - check if the number is prime or not
 * @x: num chcked
 * @y: num to check with
 *
 * Return: 1 or  0.
 */
int check(int x, int y)
{
	if (y >= (x / 2))
		return (1);
	if (x % y == 0 && y != (x / 2))
		return (0);
	else
		return (check(x, y +1));
}
