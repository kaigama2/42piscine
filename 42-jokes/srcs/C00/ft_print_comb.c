#include <piscine.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_punctuation(void)
{
    ft_putchar(',');
    ft_putchar(' ');
}
void ft_print_comb(void)
{
    int number[3];
    number[0] = '0';
    while (number[0] <= '9')
    {
        number[1] = '0';
        while (number[1] <= '9')
        {
            number[2] = '0';
            while (number[2] <= '9')
            {
                if (number[0] < number[1] && number[1] < number[2])
                {
                    ft_putchar(number[0]);
                    ft_putchar(number[1]);
                    ft_putchar(number[2]);
                    if (!(number[0] == '1' && number[1] == '2' && number[2] == '3'))
                        ft_punctuation();
                }
                number[2]++;
            }
            number[1]++;
        }
        number[0]++;
    }
}
int main()
{
    ft_print_comb();
    return (0);
}