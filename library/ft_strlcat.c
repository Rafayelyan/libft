#include "libft.h"

int	ft_strlcat(char * restrict dst, const char * restrict src, int dstsize)
{
	int dest_size;
	int	i;
	int j;

	dest_size = ft_strlen(dst);
	i = dest_size;
	j = 0;
	while (i /*- dest_size*/ < dstsize /*- dest_size */- 1)
	{
		dst[i] = src[i - dest_size];
		++i;
	}
	dst[i] = '\0';
	return (dest_size + ft_strlen(src));
}
