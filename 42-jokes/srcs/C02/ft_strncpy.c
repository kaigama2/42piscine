#include "../../includes/piscine.h"

void ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str++, 1);
    }
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
char *ft_strncpy(char *dest, char *src, int n)
{
    int i;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    
    return (dest);
}
int main(int argc, char **argv)
{
    char dest[120];
    char *pointer;
    if (0 < argc)
    {
        pointer = ft_strncpy(dest, argv[1], ft_atoi(argv[2]));
        ft_putstr(pointer);
        ft_putstr("\n");
    }
    return (0);
}