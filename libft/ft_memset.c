//#include <stdio.h>
#include "libft.h"

void *ft_memset(void *str, int c, /*size_t*/ unsigned int n)
{
    int     i;
    char    ch_c;
    char    *arr;

    i = 0;
    ch_c = (char)c;
    arr = (char*)str;

	while(i < n)
	{
		arr[i] = ch_c;
		++i;
	}

    return (arr);
}
