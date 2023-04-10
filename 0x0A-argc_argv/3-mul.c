#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of argument
 * Return: 1 .
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			sum += *argv[i];
		}
		printf("%i\n", sum);
	}
	else
		printf("Error\n");
	return (1);
}
