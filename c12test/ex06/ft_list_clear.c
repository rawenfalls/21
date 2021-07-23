#include "ft_list.h"
#include <stdlib.h>
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*t;
	t_list	*l;

	l = *begin_list;
	while (l)
	{
		t = l->next;
		if (l->data)
			free_fct(l->data);
		free(l);
		l = t;
	}
}
