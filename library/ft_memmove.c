#include "libft.h"

void *ft_memmove(void *dst, const void *src, int len)
{
    int i;
    char *dest;
    const char *source;
    
    dest = dst;
    source = src;
    i = 0;
	while (i < len)
	{
	    dest[i] = source[i];     
		++i;
	}
	return (dest);

}
