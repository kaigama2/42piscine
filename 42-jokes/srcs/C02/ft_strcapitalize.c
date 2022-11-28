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
char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if ((str[i - 1] < 48) && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
int main(int argc, char **argv)
{
    char *print;
    if (argc == 2)
    {
        print = ft_strcapitalize(argv[1]);
        ft_putstr(print);
    }
    // char *print;
    // char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    // print = ft_strcapitalize(str);
    // ft_putchar('\n');
    return(0);
}
