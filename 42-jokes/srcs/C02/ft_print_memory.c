#include "../../includes/piscine.h"
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i++]);
    }
}
void ft_putnbr_base(int nb, int base)
{
    int nbr;
    if (nb < 0)
    {
        ft_putstr("-");
        nb *= -1;
    }
    nbr = nb;
    if (nbr >= base)
    {
        nbr = nbr / base;
        ft_putnbr_base(nbr, base);
    }
    nb = nb % base + 48;
    if (nb > '9')
        ft_putchar('a' + nb - '9' - 1);
    else
        ft_putchar(nb);
}
int ft_test_4_char(char c)
{
    return ((c >= ' ' && c <= '~')) ? 1 : 0;
}
void ft_print_hexaddress(void *addr)
{
    long nbr;
    int i;
    char array[16];
    i = 0;
    nbr = (long)addr;
    while (nbr > 0)
    {
        array[i] = nbr % 16;
        if (array[i] < 10)
            array[i] = array[i] + '0';
        else
            array[i] = array[i] + 'a' - 10;
        nbr = nbr / 16;
        i++;
    }
    while (i < 16)
        array[i++] = '0';
    while (i-- >= 0)
        ft_putchar(array[i]);
}
void ft_printhex(char *str, unsigned int i, unsigned int size)
{
    int x;
    int j;
    x = 0;
    j = 0;
    while (x != 16)
    {
        while (j != 2)
        {
            if (str[i] && i < size)
            {
                ft_putnbr_base(str[i], 16);
            }
            else
                ft_putstr("  ");
            i++;
            j++;
            x++;
        }
        j = 0;
        ft_putchar(' ');
    }
}
void ft_printablestring(char *str, unsigned int i, unsigned int size)
{
    int x;
    x = 0;
    while (x != 16)
    {
        if (str[i] && i < size)
        {
            if (ft_test_4_char(str[i]))
            {
                ft_putchar(str[i]);
            }
            else
                ft_putstr(".");
        }
        x++;
        i++;
    }
}
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i;
    char *str;
    str = addr;
    i = 0;
    while (i < size)
    {
        ft_print_hexaddress(addr + i);
        ft_putchar(':');
        ft_putchar(' ');
        ft_printhex(str, i, size);
        ft_printablestring(str, i, size);
        i += 16;
        ft_putchar('\n');
    }
    return (addr);
}
int main()
{
    char str[] = "Bonjour les aminches...c  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. \n ";
    ft_print_memory(str, ft_strlen(str));
    return (0);
}