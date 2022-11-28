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
    int char_count;
    char_count = argc - 1;
    int str_no;
    str_no = 0;
    if (str_no < argc)
    {
        while (char_count > 0)
        {
            ft_putstr(argv[char_count]);
            ft_putchar('\n');
            char_count--;
        }
    }
    return (0);
}