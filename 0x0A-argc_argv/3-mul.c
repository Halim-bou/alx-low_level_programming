#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of argument
 * Return: Always (success) .
 */
int main(int argc, char *argv[])
{
	int mull = 0, m = 0, n = 0;

	if (argc > 1 && argc < 4)
	{
		m = _atoi(argv[1]);
		n = _atoi(argv[2]);
		mull = m * n;
		printf("%d\n", mull);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
