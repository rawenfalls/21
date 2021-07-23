#include <unistd.h>

void	write_back(int i)
{
	char	e;
	char	*q;

	q = "0123456789abcdef";
	e = 92;
	write(1, &e, 1);
	e = q[i / 16];
	write(1, &e, 1);
	e = q[i % 16];
	write(1, &e, 1);
}

void	write_front(char i)
{
	write(1, &i, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
		{
			write_back(str[i]);
		}
		if (((str[i] >= 32) && (str[i] <= 126)))
		{
			write_front(str[i]);
		}
		i++;
	}
}
