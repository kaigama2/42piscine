#include "../../includes/piscine.h"

void ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str++, 1);
    }
}
char *ft_strdup(char *src)
{
    char *dest;
    int i;
    int size;
    i = 0;
    size = 0;
    while (src[size])
        size++;
    if (!(dest = (char *)malloc(sizeof(dest) * (size + 1))))
        return (0);
    while (src[i])
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
    if (0 < argc)
    {
        pointer = ft_strdup(argv[1]);
        ft_putstr(pointer);
        ft_putstr("\n");
        free(pointer);
    }
    return (0);
}