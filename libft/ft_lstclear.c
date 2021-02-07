#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(!lst)
		return ;
	t_list *adress;
	while(*lst)
	{
		adress = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = adress;
	}
}
