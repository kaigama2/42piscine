#include "../../includes/piscine.h"

int ft_atoi(char *str)
{
    int result;
    int negative;
    result = 0;
    negative = 1;
    while (*str == '\v' || *str == '\t' || *str == '\f' || *str == ' ')
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            negative *= -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * negative);
}
int main()
{
    char str[] = "  ---+--+1234ab567";
    printf ("%d\n", ft_atoi(str));
    return (0);
}
