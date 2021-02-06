#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*temp;
	
	if(lst == NULL)
		temp = lst;
	else
		temp = lst->next;
	while (temp)
	{
		temp = temp->next;
	}
	return (temp);	
}
