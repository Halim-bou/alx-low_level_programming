#include "function_pointers.h"

/**
 * print_name - function that print the name given
 * @name: The anme of the person
 * @f: pointer to function that take char argument
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
