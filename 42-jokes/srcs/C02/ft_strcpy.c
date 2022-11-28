#include "../../includes/piscine.h"

void ft_putstr(char *str)
{
    while (*str)
    {
      write (1, str++, 1);
    }
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main(int argc, char **argv)
{
    char *pointer;
    char dest[120];
    if (0 < argc)
    {
        pointer = ft_strcpy(dest, argv[1]);
        ft_putstr(pointer);
        ft_putstr("\n");
    }
    return (0);
}
