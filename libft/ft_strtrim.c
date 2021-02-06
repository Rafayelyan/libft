#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		s1_len;

	start = 0;
	s1_len = ft_strlen(s1);
	end = s1_len - 1;

	while (ft_strchr(set, s1[start]) && s1[start])
	{
		++start;
	}
	while (ft_strchr(set, s1[end]) && end > start)
	{
		--end;
	}
	if(end  - start + 1 <= 0)
		return ("");
	//	return (ft_substr(s1, 0, 0));

	return (ft_substr(s1, start, end - start + 1));
}
