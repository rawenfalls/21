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
	if (argc > 1)
	{
		while (--argc > 0)
		{
			write_w(argv[argc]);
			write_w("\n");
		}
	}
	return (0);
}
