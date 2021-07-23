#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (**argv)
		{
			write(1, *argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
	}
}
