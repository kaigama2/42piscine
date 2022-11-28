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
char *ft_strlowcase(char *str)
{
     int i;
    i = 0;
    if (*str == 0)
        return (str);
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
int main()
{
    char *print;
    char str[] = "GOOD";
    print = ft_strlowcase(str);
    ft_putstr(print);
    ft_putchar('\n');
    return (0);
}
