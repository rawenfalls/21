#include "ft_list.h"
#include<stdlib.h>
#include<stdio.h>
void aff_list(struct s_list *begin)
{
	if (!begin)
		return ;
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}
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

t_list *ft_list_push_strs(int size, char **strs)
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
 int main()
{
	char *r[]={"a","b","c","d","e"};
	//char *r[]={"a"};
	aff_list(ft_list_push_strs(sizeof(r)/8,r));
	return (0);
}

