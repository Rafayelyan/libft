#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"
 
int main(void)
{
	t_list *l = ((void *)0);
	t_list *expected;
	t_list *actual;

	expected = ((void *)0);
	actual = ft_lstlast(l);
	if (actual == expected)
		printf("succses\n");
	printf("failed\n");

    return 0;
}
