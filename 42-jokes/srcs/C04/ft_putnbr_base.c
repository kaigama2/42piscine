#include "../../includes/piscine.h"

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (*(str + i))
	{
		write (1, str++, 1);
	}
}
int ft_atoi(char *str)
{
	int result;
	int negative;
	result = 0;
	negative = 1;
	while (*str == ' ' || *str == '\t' || *str == '\f' || *str == '\n')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * negative);
}

void ft_printout_revarray(char *array, int i, int handlin_neg)
{
	char dest[i + 1];
	int x;
	x = -1;
	while (i >= 0)
	{
		dest[x] = array[i];
		x++;
		i--;
	}
	if (handlin_neg == 1)
	{
		write (1, "-", 1);
	}
	write (1, dest, x);
}
int ft_check_basesystem(char *base_system)
{
	int i;
	int x;
	i = 0;
	x = 1;
	if (!base_system || !base_system[1])
		return (0);
	while (base_system[i])
	{
		if (base_system[i] == '+' || base_system[i] == '-')
			return (0);
		while (base_system[x])
		{
			if (base_system[i] == base_system[x])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}
void ft_putnbr_base(int nbr, char *base_system)
{
	int handlin_base;
	int i;
	int handlin_neg;
	char array[11];
	int base_type;
	i = 0;
	handlin_neg = 0;
	if (ft_check_basesystem(base_system))
	{
		if (nbr < 0)
			handlin_neg = 1;
		else if (nbr == 0)
			write (1, "0", 1);
		base_type = ft_strlen(base_system);
		while (nbr)
		{
		// handling first value (nbr) with remainder %
			handlin_base = nbr % base_type;
			nbr = nbr / base_type;
			if (handlin_neg == 1)
				handlin_neg *= -1;
			array[i++] = base_system[handlin_base]; 
		}
		ft_printout_revarray(array, i, handlin_neg);
	}

}
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putstr("The base_system is: \n");
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
		ft_putstr("\n");
	}
	return (0);
}