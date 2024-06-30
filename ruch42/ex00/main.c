 void ft_putchar(char c);
 void   rush(int x, int y); 


int main(void)
{
    
    rush(1, 1);
    rush(5, 5);
    rush(5, 1);
    rush(1, 5);
    rush(0, 0);
    rush(1, 0);
    rush(0, 1);
    rush(-5, 5);
    rush(5, -5);
    rush(-5, -5);
    rush(2147483648, -2147483648);
}
