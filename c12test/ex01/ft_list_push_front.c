#include "ft_list.h"
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*t;

	if (*begin_list)
	{
		t = ft_create_elem(data);
		t->next = *begin_list;
		*begin_list = t;
	}
	else
		*begin_list = ft_create_elem(data);
}
