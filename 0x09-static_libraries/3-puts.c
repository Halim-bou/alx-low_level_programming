#include "main.h"

/**
 * _puts - print a string
 * @s: the string to be printed.
 * Return: Always(success).
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
