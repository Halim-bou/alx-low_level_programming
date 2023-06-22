#include "variadic_functions.h"

/**
 * print_number - print just the numbers
 * @separator: separator of numbers
 * @n: the number
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if ( i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
