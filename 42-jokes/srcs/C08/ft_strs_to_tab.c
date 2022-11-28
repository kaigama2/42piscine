#include "../../includes/piscine.h"
#include "ft_stock_str.h"

void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}
void ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / 10);
		ft_putstr("8");
	}
	else if (nbr < 0)
	{
		ft_putstr("-");
		ft_putchar(-nbr);
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
void ft_show_tab(t_stock_str *pointer)
{
	int char_count;
	char_count = 0;
	while (pointer[char_count].str)
	{
		ft_putstr(pointer[char_count].str);
		ft_putchar('\n');
		ft_putnbr(pointer[char_count].size);
		ft_putchar('\n');
		ft_putstr(pointer[char_count].copy);
		ft_putchar('\n');
		char_count++;
	}
}
struct s_stock_str *ft_stock_str(int ac, char **av)
{
	t_stock_str *array;
	int char_count;
	int str_no;
	// returning a null pointer((void *)0) if memory was not properly allocated
	if (!(array = (t_stock_str *)malloc(sizeof(t_stock_str *) * (ac + 1))))
		return ((void *)0);
	str_no = 0;
	while (str_no < ac)
	{
		char_count = 0;
		while (av[str_no][char_count])
			char_count++;
		array[str_no].size = char_count;
		array[str_no].str = av[str_no];
		if (!(array[str_no].copy = (char *)malloc(sizeof(char *) * (array[str_no].size + 1))))
			return ((void *)0);
		char_count = 0;
		while (char_count < array[str_no].size)
		{
			array[str_no].copy[char_count] = av[str_no][char_count];
			char_count++;
		}
		array[str_no].copy[char_count] = '\0';
		str_no++;
	}
	return (array);
}
int main()
{
	t_stock_str *pointer;
	char *av[4] = {"string", "size"};
	pointer = ft_stock_str(2, av);
	ft_show_tab(pointer);
	return (0);
}