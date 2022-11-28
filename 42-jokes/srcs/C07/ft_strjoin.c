#include "../../includes/piscine.h"

void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int x;
	int j;
	char *dest;
	i = 0;
	x = 0;
	if (!(dest = (char *)malloc(sizeof(strs))))
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dest[x++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0')
		{
			dest[x++] = sep[j++];
		}
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
int main()
{
	char *pointer;
	char *string[5];
	string[0] = "Kaigama";
	string[1] = "Stephen";
	string[2] = "Moses";
	string[3] = "Victoria";
	string[4] = "Angela";
	pointer = ft_strjoin(5, string, "!!!\f");
	ft_putstr(pointer);
	ft_putstr("\n");
	free(pointer);
	return (0);
}