#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(!lst)
		return ;

	t_list	*temp;
	temp  = *lst;
	while(temp)
	{
		ft_lstdelone(temp, del);
		temp = temp->next;
	}
}
