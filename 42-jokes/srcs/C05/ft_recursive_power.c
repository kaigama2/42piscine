#include "../../includes/piscine.h"
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_recursive_power(int nb, int power)
{
    if (nb < 0 || nb > 20)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
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
    x = ft_recursive_power(5, 2);
    ft_putnbr(x);
    ft_putchar('\n');
}
