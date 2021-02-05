#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	unsigned int			i;
	unsigned char			*dest;
	unsigned const char 	*source;

	i = 0;
	dest = dst;
	source = src;

	while (i < n)
	{
		dest[i] = source[i];
		++i;
	}
	return (dest);
}
