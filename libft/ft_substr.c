#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
		int		i;
		int		s_len;
		char	*str; 

		s_len = ft_strlen(s);
		i = 0;

		if (s_len - start < len && s_len - start > 0)
		{
			len = s_len - start - 1;
		}
		if ((int)(s_len - start) <= 0)
		{
			//return ("");
			//return (NULL);
			return ("\0");
			//len = 0;
		}
		str = (char* )malloc(len * sizeof(char));

		while (i < len)
		{
			str[i] = s[i + start];
			++i;			
		}
		str[i] = '\0';

		return (str);
}
