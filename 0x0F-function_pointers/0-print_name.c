#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prin a name
 * @name: the name to be printed
 * @f: a pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
