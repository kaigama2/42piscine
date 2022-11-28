#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str++, 1);
    }
}
int main(int argc, char **argv)
{
    int i;
    i = 1;
    if (0 < argc)
    {
        while (i < argc)
        {
            ft_putstr(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return (0);
}
