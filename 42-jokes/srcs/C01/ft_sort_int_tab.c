#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    int i;
    i = 10;
    if (nbr > 9)
    {
        ft_putnbr(nbr / i);
    }
    ft_putchar(48 + nbr % i);
    // int size;
    // size = 10;
    // while (size)
    // {
    //     ft_putchar((nbr / size) + 48);
    //     nbr %= size;
    //     size /= 10;
    // }
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
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int x;
    int temp;
    i = 0;
    while (i < size)
    {
        x = 0;
        while (x < (size - 1))
        {
            if (tab[x] > tab[x + 1])
            {
                temp = tab[x];
                tab[x] = tab[x + 1];
                tab[x + 1] = temp;
            }
            x++;
        }
        i++;
    }
}
int main()
{
    int tab[] = {14, 12, 16, 15, 10, 13, 18, 11, 17};
    ft_sort_int_tab(tab, 9);
    ft_print_out(tab, 9);
    ft_putchar('\n');
    return (0);
}