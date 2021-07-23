void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	char	*r;
	int		i;
	int		j;
	int		len;

	len = 0;
	while (tab[len] != 0)
		len++;
	i = -1;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				r = tab[i];
				tab[i] = tab[j];
				tab[j] = r;
			}
		}
	}
}
