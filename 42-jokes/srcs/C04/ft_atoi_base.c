#include "../../includes/piscine.h"

int ft_handle_char_in_str(char c, char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}
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
int ft_convert_str_to_int(char *str, char *base_type, int start, int end)
{
	int one;
	one = 1;
	int whole_no;
	int base_len;
	whole_no = 0;
	base_len = ft_strlen(base_type);
	while (end >= start)
	{
		whole_no = whole_no + (ft_handle_char_in_str(str[end], base_type) - 1) * one;
		one = one * base_len;
		end--;
	}
	return (whole_no);
}
int ft_basetype_handling(char *base_type)
{
	int i;
	int x;
	i = 0;
	x = 1;
	while (base_type[i] != '\0')
	{
		if ((base_type[i] >= 0 && base_type[i] <= 32) || base_type[i] == ' ' \
		|| base_type[i] == 43 || base_type[i] == 45)
		return (0);
		while (base_type[x])
		{
			if (base_type[i] == base_type[x])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}
int ft_atoi_base(char *str, char *base_type)
{
	int i;
	int neg;
	int start;
	i = 0;
	neg = 1;
	if (ft_basetype_handling(base_type) == 0 || ft_strlen(base_type) < 2)
		return (0);
	while ((str[i] >= 0 && str[i] <= 32) || (str[i] == ' '))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			neg = neg * -1;
		}
		i++;
	}
	start = i;
	while (ft_handle_char_in_str(str[i], base_type) > 0)
		i++;
		i--;
	return (ft_convert_str_to_int(str, base_type, start, i) * neg);
}
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf ("%d\n", ft_atoi_base(argv[1], argv[2]));
	}
	return (0);
}