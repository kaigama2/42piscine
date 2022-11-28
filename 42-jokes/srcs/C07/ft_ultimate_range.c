#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    else
    {
        if (nbr > 9)
        {
            ft_putnbr(nbr / 10);
        }
        ft_putchar(48 + nbr % 10);
    }
}
void ft_printout(int *array, int range)
{
    int i;
    i = 0;
    while (i < range)
    {
        ft_putnbr(array[i++]);
        ft_putchar(' ');
    }
}
int ft_ultimate_range(int **range, int min, int max)
{
    int *array;
    int i;
    i = 0;
    if (min >= max)
        return (0);
    if (!(array = (int *)malloc(sizeof(array) * (max - min))))
        return (-1);
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    *range = array;
    return (i);
}
int main()
{
    int *array;
    int size;
    int i;
    i = 0;
    // char **array is used as a temporer storage for data in code
    size = ft_ultimate_range(&array, 1, 20);
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    ft_putchar('\n');
}