#include<unistd.h>

void	write_w(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
		i++;
	write(1, nb, i);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			write_w(argv[i]);
			write_w("\n");
		}
	}
	return (0);
}
