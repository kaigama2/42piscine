#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_atoi(char *str)
{
    int result;
    int neg;
    result = 0;
    neg = 1;
    while (*str == ' ' || *str == '\t' || *str == '\f')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            neg *= -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * neg);
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    i = 0;
    while (src[i] != '\0' && i < nb)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf ("%s\n", ft_strncat(argv[1], argv[2], ft_atoi(argv[3])));
    }
    // char dest[8];
    // char src[] = "kaigama";
    // printf("%s\n", ft_strncat(dest, src, 4));
    return (0);
}