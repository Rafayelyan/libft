#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     s_len;
    int     index;
    char    *res;

    s_len = ft_strlen(s);
    res = (char*)malloc(s_len * sizeof(char));
    index = 0;
    while (index < s_len)
    {
        res[index] = (*f)(index, s[index]);
        ++index;
    }

    return (res);
}