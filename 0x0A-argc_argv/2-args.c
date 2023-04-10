#include <stdio.h>
#include "main.h"

/**
 * main -prints all arguments it receives
 * @argc: argument counter
 * @argv: argument array
 * Return: Always 0 .
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
