#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	if(!lst)
		return (0);

	count = 1;
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
		++count;
	}
	return (count);
}
