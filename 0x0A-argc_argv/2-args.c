#include "main.h"

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
