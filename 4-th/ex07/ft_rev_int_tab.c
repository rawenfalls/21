#include<stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;

	i = -1;
	while (++i < --size)
	{
		e = tab[i];
		tab[i] = tab[size];
		tab[size] = e;
	}
}
