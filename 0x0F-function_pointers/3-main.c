#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if success , exit 98 if operation field,
 * or 99 if argument not correct.
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int rst, n1, n2;

	if (argc == 4)
	{
		operation = get_op_func(argv[2]);
		if (argv[2][1] != '\0' ||
				operation == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		rst = operation(n1, n2);
		printf("%d\n", rst);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
