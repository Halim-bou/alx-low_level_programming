#include "variadic_functions.h"
#include <stdio.h>

void P_char(char *sepa, va_list args);
void P_int(char *sepa, va_list args);
void P_float(char *sepa, va_list args);
void P_string(char *sepa, va_list args);
/**
 * print_all - print all arguments passed
 * @format: format of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	fdt_ format_t[] = {
		{"c", P_char},
		{"i", P_int},
		{"f", P_float},
		{"s", P_string}
	};

	unsigned int i = 0;
	unsigned int j = 0;

	char *sepa = "";

	va_start(args, format);

	while (format[i] && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *format_t[j].c)
			{
				format_t[j].f(sepa, args);
				sepa = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * P_char - print char
 * @sepa: separator of characters
 * @args: arguments
 *
 * Return: Nothing
 */
void P_char(char *sepa, va_list args)
{
	printf("%s%c", sepa, va_arg(args, int));
}

/**
 * P_int - print an integer
 * @sepa: separator of characters
 * @args: arguments
 *
 * Return: Nothing
 */
void P_int(char *sepa, va_list args)
{
	printf("%s%d", sepa, va_arg(args, int));
}

/**
 * P_float - print a float type
 * @sepa: separator of characters
 * @args: arguments
 *
 * Return: Nothing
 */
void P_float(char *sepa, va_list args)
{
	printf("%s%f", sepa, va_arg(args, double));
}

/**
 * P_string - print a string
 * @sepa: separator of charcters
 * @args: arguments passed
 *
 * Return: Nothing
 */
void P_string(char *sepa, va_list args)
{
	char *argument = va_arg(args, char *);

	if (argument == NULL)
	{
		printf("%s%s", sepa, "(nil)");
		return;
	}
	printf("%s%s", sepa, argument);
}
