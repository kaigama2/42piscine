#include "../../includes/piscine.h"
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_sqrt(int nb)
{
    int i;
    while (i * i < nb)
    {
        i++;
    }
    if (i * i == nb)
        return (i);
    return (0);
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
    x = ft_sqrt(1024);
    ft_putnbr(x);
    ft_putchar('\n');
}