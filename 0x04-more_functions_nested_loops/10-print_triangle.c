#include "maine.h"

/**
 * print_triangle - print a triangle
 * @size: is the size of the triangle
 * Return: Always (success).
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j--)
			{
				_putchar(32);
			}
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

