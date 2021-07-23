#include <stdlib.h>
#include "ft_btree.h"
t_btree	*btree_create_node(void *item)
{
	t_btree	*slot;

	slot = (t_btree *)malloc(sizeof(t_btree));
	if (slot)
	{
		slot->left = 0;
		slot->right = 0;
		slot->item = item;
	}
	return (slot);
}
