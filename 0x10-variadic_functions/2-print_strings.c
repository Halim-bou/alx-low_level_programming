#include "variadic_functions.h"

/**
 * print_strings - print string parameter given
 * @separator: the separator of the strings
 * @n: number of elements
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *c;
	unsigned int i = 0;

	va_start(str, n);
	while (i < n)
	{
		c = va_arg(str, char *);
		if (str != NULL)
			printf("%s", c);
		if (str == NULL)
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(str);
}
