#include "../../includes/piscine.h"

char *ft_strstr(char *str, char *find)
{
    int i;
    int x;
    i = 0;
    x = 0;
    if (*find == 0)
        return (NULL);
    while (*(str + i))
    {
        while (str[i + x] == find[x])
        {
            if (find[x + 1] == '\0')
                return (&str[i]);
            x++;
        }
        i++;
    }
    return (0);
}
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf ("%s\n", ft_strstr(argv[1], argv[2]));
    }
    // char str[] = "God is great";
    // char find[] = "eat";
    // printf("%s\n", ft_strstr(str, find));
    return (0);
}
