/**
 * rush - function that print a pattern.
 * x: size of rows.
 * y: size of columns
 * Return: Nothing.
 */
 #include "rush00.h"

 void   ft_row_printer(char first, char midd, char last, int row_size)
 {
    ft_putchar(first);
    while (row_size > 2)
    {
        ft_putchar(midd);
        row_size--;
    }
    if (row_size == 2)
        ft_putchar(last);
    ft_putchar('\n');
 }

 void   rush(int x, int y)
 {
    if (x <= 0 || y <= 0)
        return ;
    ft_row_printer('o', '-', 'o', x);
    while (y > 2)
    {
        ft_row_printer('|', ' ', '|', x);
        y--;
    }
    if (y == 2)
        ft_row_printer('o', '-', 'o', x);
 }
