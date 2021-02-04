#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, int n)
{
	int			i;
	char		*dest;
	const char 	*source;

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
	//	dest[n] = '\n';
	return (0);

}


//some text
