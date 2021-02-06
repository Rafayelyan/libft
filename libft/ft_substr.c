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

		if (s[0] == '\0')
			return (NULL);
		if (s_len <= (int)start)
			len = 0;
		if (s_len < len + start && (int)(s_len - start) > 0)
			len = s_len - start - 1;
		if (!(str = (char* )malloc((len + 1) * sizeof(char))))
				return (NULL);
		while (i < len)
		{
			str[i] = s[i + start];
			++i;			
		}
		str[i] = '\0';

		return (str);
}
