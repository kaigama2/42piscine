#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_atoi(char *str)
{
    int result;
    int negative;
    result = 0;
    negative = 1;
    while (*str == ' ' || *str == '\t' || *str == '\f')
        str++;
    while (*str == 43 || *str == 45)
    {
        if (*str == 45)
            negative *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * negative);
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

int ft_strlcpy(char *dest, char *src, int size)
{
    int i;
    i = 0;
    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}
int main(int argc, char **argv)
{
    int print;
    char dest[120];
    if (0 < argc)
    {
        print = ft_strlcpy(dest, argv[1], ft_atoi(argv[2]));
        ft_putnbr(print);
        ft_putchar('\n');
    }
    return (0);
}
