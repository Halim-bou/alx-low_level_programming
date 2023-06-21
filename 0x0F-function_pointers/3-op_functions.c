#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calc the sum
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int op_add (int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calc subtract
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calc the multiply
 * @a: first integer
 * @b: second intetger
 * Return: The result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calc the divide
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Erro\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calc the module
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0 )
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
