#include "main.h"

/**
 * more_numbers - prints 10 time the numbers 0 to 14
 *
 * Return: Always (success).
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	for (; i <= 10; i++)
	{
		j = 0;
		for (; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
