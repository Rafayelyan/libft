#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int 	length;
	char 	*s1_copy;
	int		i;
	
	length = ft_strlen(s1);
	s1_copy = (char* )malloc((length + 1) * sizeof(char));
	i = 0;
	while (i < length)
	{
		s1_copy[i] = s1[i];
		++i;
	}
	s1_copy[i] = '\0';

	return (s1_copy);
}
