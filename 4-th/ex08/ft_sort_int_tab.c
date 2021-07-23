#include<stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	e;
	int	swap;

	i = -1;
	while (++i < size)
	{
		e = -1;
		while (++e < size)
		{
			if (tab [e] > tab [e +1])
			{
				swap = tab [e];
				tab [e] = tab [e +1];
				tab [e +1] = swap;
			}
		}
	}
}
