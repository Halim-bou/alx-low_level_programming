#include "rush04.h"

int main(void)
{
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(1, 1);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(5, 5);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(5, 1);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(1, 5);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(0, 1);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(1, 0);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(-5, 5);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(5, -5);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(-5, -5);
    write(1, "####################", 20);
    ft_putchar('\n');
    rush(2147483648, -2147483648);
}
