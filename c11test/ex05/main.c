#include <unistd.h>
void	print_num(int i)
{
	char	r;

	if (i > 0)
	{
		r = i % 10 + '0';
		if (i / 10 > 0)
			print_num(i / 10);
		write(1, &r, 1);
	}
	else if (i < 0)
	{
		write(1, "-", 1);
		print_num ((-1) * i);
	}
	else
		write(1, "0", 1);
}

void	what_is_symbol(char *e, int i1, int i2, void(*f)(int))
{
	if (e[0] == '-')
		f (i1 - i2);
	else if (e[0] == '+')
		f (i1 + i2);
	else if (e[0] == '*')
		f (i1 * i2);
	else if (e[0] == '%')
	{
		if (i2 != 0)
			f (i1 % i2);
		else
			write(1, "Stop : modulo by zero", 21);
	}
	else if (e[0] == '/')
	{
		if (i2 != 0)
			f (i1 / i2);
		else
			write(1, "Stop : division by zero", 23);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int	what_is_number(char *e)
{
	int	i;
	int	num;
	int	negativ;

	i = -1;
	num = 0;
	negativ = 1;
	while (e[++i])
	{
		if ((e[i] == '-' || e[i] == '+') && num == 0)
		{
			if (e[i] == '-')
				negativ *= -1;
		}
		else if ((e[i] < '0' || e[i] > '9')
			&& (e[i] != '-' || e[i] != '+'))
			return (num * negativ);
		else
			num = num * 10 + e[i] - 48;
	}
	return (num * negativ);
}

int	main(int a, char **b)
{
	if (a != 4)
		return (0);
	if (a == 4)
		what_is_symbol(b[2], what_is_number(b[1]), what_is_number(b[3]),
			&print_num);
	return (0);
}
