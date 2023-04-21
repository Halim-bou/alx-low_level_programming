#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that print string
 * @separator: string sep between strings
 * @n: number of strings
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
