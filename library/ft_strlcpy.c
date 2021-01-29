#include "libft.h"

int	ft_strlcpy(char * dst, const char * src, int dstsize)
{
	unsigned int	i;

	i = 0;
	//--dstsize;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	i = 0;

	return (ft_strlen(src));
}
