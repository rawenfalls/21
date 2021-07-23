#include<unistd.h>

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

void	sort_f(char **argv, int argc)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				r = argv[i];
				argv[i] = argv[j];
				argv[j] = r;
			}
		}
	}
	i = 0;
	while (argv[++i])
	{
		write_w(argv[i]);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		sort_f(argv, argc);
	return (0);
}
