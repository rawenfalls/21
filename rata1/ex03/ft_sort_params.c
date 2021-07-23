#include <unistd.h>
#include <stdio.h>

int	cmp_str(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	insertion_sort_arr_str(char ***pt_arr_str, size_t size)
{
	size_t	i;
	size_t	j;
	char	*curr;

	i = 0;
	while (++i < size)
	{
		curr = (*pt_arr_str)[i];
		j = i - 1;
		while (j > -1)
		{
			if (cmp_str((*pt_arr_str)[j], curr) > 0)
				(*pt_arr_str)[j + 1] = curr;
			else
			{
				break ;
			}
			j--;
		}
		(*pt_arr_str)[j + 1] = curr;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	argv++;
	argc--;
	if (argc < 1)
		return (0);
	insertion_sort_arr_str(&argv, argc);
	i = -1;
	while (++i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
	}
}
