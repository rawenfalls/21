#include<unistd.h>
#include "ft_stock_str.h"

void	write_str(char *r, int size)
{
	if (size == 0)
		return ;
	write(1, r, size);
}

int	size_f(int i, int q)
{
	while (i > 0)
	{
		i = i / 10;
		q++;
	}
	return (q);
}

void	wtite_int(int size)
{
	int		i;
	int		q;
	char	e;
	int		s;

	i = size;
	q = 0;
	if (size == 0)
		write(1, "0", 1);
	q = size_f(i, q);
	while (size > 0)
	{
		i = q - 1;
		s = 1;
		while (i > 0)
		{
			s *= 10;
			i--;
		}
		e = (size / s) + '0';
		write(1, &e, 1);
		q--;
		size = size % s;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str)
	{
		write_str(par[i].str, par[i].size);
		write(1, "\n", 1);
		wtite_int(par[i].size);
		write(1, "\n", 1);
		write_str(par[i].copy, par[i].size);
		write(1, "\n", 1);
	}
}
