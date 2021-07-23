#include <unistd.h>

void	write_w(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
		i++;
	write(1, nb, i);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void ft_sort_string_tab(char **tab)
{
	char	*r;
	int		i;
	int		j;
	int		len;

	
	len = 0;
	while (tab[len] != 0)
			len++;
	i =-1;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				r = tab[i];
				tab[i] = tab[j];
				tab[j] = r;
			}
		}
	}
	write(1, "3\n", 2);
	i = -1;
	while (tab[++i] != 0)
	{
		write_w(tab[i]);
	}
}

int	main()//int argc, char **argv
{
	char *r[]={"hello", "word", "bleat", "me", "gghh",  NULL};
	//printf("%s\n",r[-1]);
	ft_sort_string_tab(r);
//	if (argc > 1)
//		ft_sort_string_tab(argv);
	return (0);
}

