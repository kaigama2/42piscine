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
#include <unistd.h>

void	ft_putout(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		checkdiag(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		checksafe(int nqueen, int *board)
{
	int i;

	i = 0;
	while (i < nqueen)
	{
		if ((board[nqueen] == board[i]) ||
				(checkdiag(board[nqueen], board[i]) == (nqueen - i)))
			return (0);
		i++;
	}
	return (1);
}

void	start(int nqueen, int *board, int *conta)
{
	board[nqueen] = 0;
	while (board[nqueen] < 10)
	{
		if (checksafe(nqueen, board))
		{
			if (nqueen == 9)
			{
				ft_putout(board);
				*conta = *conta + 1;
			}
			else
				start(nqueen + 1, board, conta);
		}
		board[nqueen]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int nqueen;
	int conta;

	conta = 0;
	nqueen = 0;
	start(nqueen, board, &conta);
	return (conta);
}
int main()
{
    int x;
    x = ft_ten_queens_puzzle();
    ft_putnbr(x);
    ft_putchar('\n');
}
