#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - .....
 * @s: .....
 * Return: .....
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	for (; i < 5; i++)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
