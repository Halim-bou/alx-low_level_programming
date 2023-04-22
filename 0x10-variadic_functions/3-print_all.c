#include "variadic_functions.h"
#include <stdio.h>

/**
 * _char - print char
 * @sepa: sepa of charcters
 * @args: arguments of the char
 */
void _char(char *sepa, va_list args)
{
	printf("%s%c", sepa, va_arg(args, int));
}

/**
 * _int - print integer
 * @sepa: separator of charcters
 * @args: arguments of the integer
 */
void _int(char *sepa, va_list args)
{
	printf("%s%i", sepa, va_arg(args, int));
}

/**
 * _float - print float
 * @sepa: separator of characters
 * @args: arguments of the float
 */
void _float(char *sepa, va_list args)
{
	printf("%s%f", sepa, va_arg(args, double));
}

/**
 * _string - print a string
 * @args: arguments of the string
 * @sepa: separator of charcters
 */
void _string(char *sepa, va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("%s%s", sepa, "(nil)");
		return;
	}
	printf("%s%s", sepa, str);
}

/**
 * print_all - print the given argument
 * @format: types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	fdt_ format_t[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string}
	};

	int i = 0;
	int j = 0;
	char *sepa;

	va_start(args, format);

	while (format[i] && format != NULL)
	{
		j = 0;
		while (i < 4)
		{
			if (*format_t[j].c == format[i])
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
