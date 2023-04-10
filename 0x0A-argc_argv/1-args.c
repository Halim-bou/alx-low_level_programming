#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments
 * @argc: argument counter
 * @argv: array of argument
 * Return: Always 0 .
 */
int main(int argc, char *argv[])
{
(void) argv;/*compile with unused argv*/
	printf("%d\n", argc - 1);
	return (0);
}
