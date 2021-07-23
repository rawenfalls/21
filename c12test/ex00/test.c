#include<stdlib.h>
#include<stdio.h>
#include "ft_list.h"

struct s_list
{
	int		i;
	char	c;
	struct	s_list *next;
};

void aff_list(struct s_list *begin)
{
	if (!begin)
		return ;
	while (begin)
	{
		printf("%d\n", begin->i);
		begin = begin->next;
	}
}

t_list *ft_create_elem(void *data)
{
	t_list *t;
	
	t = (t_list *)malloc(sizeof(t_list));
	if (t == 0)
		return (0);
	
	t.data =data;
	t.next = NULL;
	return (t);
}

int main(void)
{
	struct s_list elem1;
	struct s_list elem2;
	struct s_list elem3;
	struct s_list *begin;
	
	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;
	
	elem3.i = 3;
	elem2.i = 2;
	elem1.i = 1;
	
	aff_list(begin);
	
	return (0);
}


