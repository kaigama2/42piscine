#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str++);
    }
}
int main()
{
    char str[] = "kaigama";
    ft_putstr(str);
    ft_putchar('\n');
    return (0);
}