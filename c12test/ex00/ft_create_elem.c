#include<stdlib.h>
#include "ft_list.h"
t_list	*ft_create_elem(void *data)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list));
	if (t == 0)
		return (0);
	t->data = data;
	t->next = NULL;
	return (t);
}
