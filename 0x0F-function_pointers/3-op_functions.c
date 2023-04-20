#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add operation
 * @a: first integer
 * @b: second intger
 *
 * Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first integer
 * @b: secong integer
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first integer
 * @b: second integer
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - diverse operation
 * @a: first integer
 * @b: second integer
 *
 * Return: the result, or exit 100.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: first integer
 * @b: second integer
 *
 * Return: result or exit 100 if b is 0 .
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
