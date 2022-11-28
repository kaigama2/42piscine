#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_printout(char **argv)
{
    int str_no;
    int character_count;
    str_no = 1;
    while (argv[str_no])
    {
        character_count = 0;
        while (argv[str_no][character_count])
        {
            ft_putchar(argv[str_no][character_count]);
            character_count++;
        }
        ft_putchar(' ');
        str_no++;
    }
    ft_putchar('\n');
}
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
int main(int argc, char **argv)
{
    char *temporary_storage;
    int str_no;
    int character_count;
    str_no = 1;
    while (str_no < argc)
    {
        character_count = 1;
        while (character_count < argc)
        {
            // < 0 means the position to start printing the sorted string up or down
            if (ft_strcmp(argv[str_no], argv[character_count]) < 0)
            {
                temporary_storage = argv[str_no];
                argv[str_no] = argv[character_count];
                argv[character_count] = temporary_storage;
            }
            character_count++;
        }
        str_no++;
    }
    ft_printout(argv);
    return (0);
}