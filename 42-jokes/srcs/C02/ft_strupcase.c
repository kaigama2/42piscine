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
char *ft_strupcase(char *str)
{
     int i;
    i = 0;
    if (*str == 0)
        return (str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
int main(int argc, char **argv)
{
    char *pointer;
    if (0 < argc)
    {
        pointer = ft_strupcase(argv[1]);
        ft_putstr(pointer);
        ft_putchar('\n');
    }
    return (0);
}