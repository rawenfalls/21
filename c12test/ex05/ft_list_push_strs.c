#include "ft_list.h"
t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*t;
	t_list	*l;
	int		i;

	l = ft_create_elem(strs[0]);
	t = l;
	i = 1;
	while (i < size)
	{
		l = ft_create_elem(strs[i]);
		l->next = t;
		t = l;
		i++;
	}
	return (l);
}
