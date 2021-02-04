#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		index;
	int		counter;;

	index = 0;
	counter = 0;
	
	//printf("dstsize : %lu\nindex : %d\n", dstsize, index);

	while (dst[index] && index < dstsize)
	{
		++index;
	}
	while (dstsize > counter + index + 1 && src[counter] != '\0')
	{
		dst[index + counter] = src[counter];
		++counter;
	}
	if (index < dstsize)
	{
		dst[index + counter] = '\0';
	}

	return (index + ft_strlen(src));
}

/*
	int dest_size;
	int	i;
	int j;

	dest_size = ft_strlen(dst);
	i = dest_size;
	j = 0;
	while (i  < dstsize - 1)
	{
		dst[i] = src[i - dest_size];
		++i;
	}
	dst[i] = '\0';
	return (dest_size + ft_strlen(src));
*/
