void	ft_list_reverse(t_list **begin_list)
{
	t_list	*l;
	t_list	*t;

	if ((*begin_list) || ((*begin_list)->next))
	{
		l = 0;
		while (*begin_list)
		{
			t = (*begin_list)->next;
			(*begin_list)->next = l;
			l = *begin_list;
			*begin_list = t;
		}
		*begin_list = l;
	}
}
