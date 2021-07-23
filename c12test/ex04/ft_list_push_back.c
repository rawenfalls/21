#include "ft_list.h"
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*t;

	if (*begin_list)
	{
		t = *begin_list;
		while (t->next)
			t = t->next;
		t->next =ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
