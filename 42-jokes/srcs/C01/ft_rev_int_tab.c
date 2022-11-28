#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar(48 + nbr % 10);
}
void ft_print_out(int *tab, int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(' ');
        i++;
    }
}
void ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    int temp;
    while (i < size--)
    {
        temp = tab[i];
        tab[i] = tab[size];
        tab[size] = temp;
        i++;
    }
}
int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ft_rev_int_tab(tab, 10);
    ft_print_out(tab, 10);
    ft_putchar('\n');
    return (0);
}