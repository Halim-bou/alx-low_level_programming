#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that print the name given
 * @name: The anme of the person
 * @f: pointer to function that take char argument
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
