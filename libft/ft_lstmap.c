#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*lst_cpy;

	if(!lst || !f)
	{
		return (NULL);
	}

	temp = lst;
	
	while (temp)
	{
		t_list	*new;
		if(!(new = ft_lstnew(f(lst->content)) ))
		{
			ft_lstclear(&lst_cpy, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_cpy, new);
		temp = temp->next;
	}

	return (lst_cpy);
}
