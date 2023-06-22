#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main- check the code
 * @argc: argument counter
 * @argv: argument value
 * Return: .....
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int n1 = 0, n2 = 0, sum = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	sum = func(n1, n2);
	printf("%d\n", sum);
	return (0);
}
