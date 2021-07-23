#include<stdlib.h>
#include "ft_stock_str.h"
struct s_stock_str	*ft_l(int i, int j, struct s_stock_str	*r, char **av)
{
	while (av[i][++j])
	{
		r[i].size = j + 1;
		r[i].str = av[i];
		r[i].copy = (char *)malloc(sizeof(char) * (r[i].size));
		if (r[i].copy == 0)
			return (0);
	}
	j = -1;
	while (++j < r[i].size)
		r[i].copy[j] = av[i][j];
	if (r[i].size == 0)
	{
		r[i].str ="\0";
		r[i].copy ="\0";
	}
	else
		r[i].copy[j] = '\0';
	return (r);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_str		*r;

	if (ac == 0)
		return (0);
	r = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (r == 0)
		return (0);
	i = -1;
	while (++i < ac)
	{
		j = -1;
		r[i].size = 0;
		ft_l(i, j, r, av);
	}
	r[i].str = 0;
	return (r);
}
