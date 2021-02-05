#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, int n)
{
	int							i;
	unsigned	char			*dest;
	unsigned	const	char 	*source;

	i = 0;
	dest = dst;
	source = src;

	while (i < n)
	{
		if(source[i] != (unsigned char)c)
		{
			dest[i] = source[i];
			++i;
		}
		else
		{
			dest[i] = source[i];
			++i;
			return (&dest[0] + i);
		}
	}
	return (0);
}
/*
   if(!dst && !src)
	return (dst);
*/
