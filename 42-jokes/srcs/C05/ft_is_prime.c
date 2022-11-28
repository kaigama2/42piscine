#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_is_prime(int nb)
{
    int i;
    i = 2;
    if (nb < 2)
        return (0);
    while (i <= (nb / i))
    {
        if ((nb % i) == 0)
            return (0);
        i++;
    }
    return (1);
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
    x = ft_is_prime(4);
    ft_putnbr(x);
    ft_putchar('\n');
}
