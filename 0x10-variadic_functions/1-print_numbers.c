#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: string separator between numbers
 * @n: number of integers
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;

	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			printf("%d", num);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
		printf("\n");
	}
}
