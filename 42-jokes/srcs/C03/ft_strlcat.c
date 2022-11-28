#include "../../includes/piscine.h"

int ft_strlcat(char *dest, char *src, unsigned size)
{
    unsigned int i;
    i = 0;
    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    return (i);
}
int main()
{
    char dest[8];
    char src[] = "kaigama";
    printf("%d\n", ft_strlcat(dest, src, 7));
    return (0);
}
