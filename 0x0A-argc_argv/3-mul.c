#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of argument
 * Return: 1 .
 */
int main(int argc, char *argv[])
{
	int mull = 0;

	if (argc > 1)
	{
		mull = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mull);
	}
	else
		printf("Error\n");
	return (1);
}
