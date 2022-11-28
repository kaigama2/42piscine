#include "../../includes/piscine.h"

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
int main()
{
    char s1[] = "king";
    char s2[] = "king";
    printf("%d\n", ft_strcmp(s1, s2));
}