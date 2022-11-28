#include "../../includes/piscine.h"
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    else
    {
        if (nbr > 9)
        {
            ft_putnbr(nbr / 10);
        }
        ft_putchar(48 + nbr % 10);
    }
}
int main()
{
    int x;
    x = ft_fibonacci(4);
    ft_putnbr(x);
    ft_putchar('\n');
}
