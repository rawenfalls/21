#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
void	write_me(int fd)
{
	char	a;

	while (read(fd, &a, 1) != 0)
		write(1, &a, 1);
}

int	write_str(char *e, char **b)
{
	write(2, "ft_cat: ", 8);
	write(2, *b, 1);
	write(2, ": ", 2);
	while (*e)
		write(2, e++, 1);
	write(2, "\n", 1);
	return (1);
}

void	cat_l(void)
{
	char	a;

	while (read(0, &a, 1) != 0)
		write(1, &a, 1);
}

int	main(int a, char **b)
{
	int	fd;
	int	q;

	q = 0;
	if (a == 1)
		cat_l();
	if (a >= 2)
	{
		b++;
		while (a >= 2)
		{
			fd = open(*b, O_RDONLY);
			if (fd == -1)
				q = write_str(strerror(errno), b);
			else
			{
				write_me(fd);
				close(fd);
			}
			b++;
			a--;
		}
	}
	return (q);
}
