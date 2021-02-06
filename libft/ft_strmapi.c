#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     s_len;
    int     index;
    char    *res;

    s_len = ft_strlen(s);
    if (!(res = (char*)malloc((s_len + 1) * sizeof(char))))
		return (NULL);
    index = 0;
    while (index < s_len)
    {
        res[index] = (*f)(index, s[index]);
        ++index;
    }
	res[index] = '\0';

    return (res);
}
