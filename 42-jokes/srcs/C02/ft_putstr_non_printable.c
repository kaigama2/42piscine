#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_handle_hexadecimal(char *hex_str)
{
    int i;
    int x;
    i = 0;
    x = 1;
    while (hex_str[i] != '\0')
    {
        if (!((hex_str[i] >= '0' && hex_str[i] <= '9') \
         || (hex_str[i] >= 'a' && hex_str[i] <= 'z') || (hex_str[i] >= 'A' && hex_str[i] <= 'Z')))
            return (0);
        while (hex_str[x])
        {
            if (hex_str[i] >= hex_str[x])
                return (0);
            x++;
        }
        i++;
    }
    return (1);
}
void ft_putstr_non_printable(char *str)
{
    char *hexadecimal;
    int i;
    i = 0;
    hexadecimal = "0123456789abcdef";
    if (ft_handle_hexadecimal(hexadecimal) == 1)
    {
        while (str[i] != '\0')
        {
            if (str[i] >= 0 && str[i] <= 32)
            {
                ft_putchar(' ');
                if (str[i] < 16)
                {
                    ft_putchar('\\');
                    ft_putchar('0');
                    ft_putchar(hexadecimal[str[i]]);
                }
            }
            else
                ft_putchar(str[i]);
            i++;
        }
    }
}
int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    ft_putchar('\n');
    return (0);
}