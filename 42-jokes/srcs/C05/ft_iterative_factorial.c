#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_iterative_factorial(int nb)
{
    int result;
    result = 0;
    if (nb < 0 || nb > 12)
        return (0);
    if (nb < 2)
        return (1);
    result = nb--;
    while (nb > 1)
    {
        // !5 = 1 * 2 * 3 * 4 * 5 = 120;
        result = result * nb;
        nb--;
    }
    return (result);
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
    x = ft_iterative_factorial(5);
    ft_putnbr(x);
    ft_putchar('\n');
}