#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char s);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _char(char *sepa, va_list args);
void _int(char *sepa, va_list args);
void _float(char *sepa, va_list args);
void _string(char *sepa, va_list args);

/**
 * struct fomat_t - ...
 * @c: ...
 * @f: ...
 * */

typedef struct format_t
{
	char *c;
	void (*f)(char *sepa, va_list args);
} fdt_;
#endif
