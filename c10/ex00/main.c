#include <unistd.h>
#include <fcntl.h>
void	write_me(int fd)
{
	char	a;

	while (read(fd, &a, 1) != 0)
		write(1, &a, 1);
}

int	main(int a, char **b)
{
	int	fd;

	if (a != 2)
	{
		if (a > 2)
			write(2, "Too many arguments.\n", 20);
		if (a < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(b[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	write_me(fd);
	close(fd);
	return (0);
}
