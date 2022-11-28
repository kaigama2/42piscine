#include "../../includes/piscine.h"

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (*(str + i))
    {
        write (1, str++, 1);
    }
}
int main()
{
    char str[] = "kaigama";
    ft_putstr(str);
    ft_putstr("\n");
    return (0);
}
