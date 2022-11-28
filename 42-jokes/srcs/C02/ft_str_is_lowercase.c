#include "../../includes/piscine.h"
void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putnbr(nbr % 10);
        ft_putchar('8');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
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
int ft_str_is_lowercase(char *str)
{
     int i;
    i = 0;
    if (*str == 0)
        return (1);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            return (1);
        }
        i++;
    }
    return (0);
}
int main()
{
    int n;
    char str[] = "";
    n = ft_str_is_lowercase(str);
    ft_putnbr(n);
    ft_putchar('\n');
    return (0);
}
